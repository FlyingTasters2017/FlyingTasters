run Simulink_DataView_asn;

inports_positions = zeros(3, 4);
bussel_positions = zeros(3, 4);
outports_positions = zeros(1, 4);
buscre_positions = zeros(1, 4);

if (exist('controlAction3') == 4),
	simulink('open');
	load_system('controlAction3');
	open_system('controlAction3');
	inportHan = find_system('controlAction3','FindAll','on', 'SearchDepth', 1, 'BlockType','Inport');
	outportHan = find_system('controlAction3','FindAll','on', 'SearchDepth', 1, 'BlockType','Outport');
	% ---------------------------------------------------------------------------------
	% start by removing the Bus Selectors / then lines / finally ports 
	% ---------------------------------------------------------------------------------
	% get the handles of all the lines connected to inports 
	for i=1:length(inportHan)
		inports_positions(i,:) = get_param(inportHan(i),'Position'); % remember Inport's position
		line_structsIn(i)=get_param(inportHan(i),'LineHandles'); % get the structures
		inLinesHan(i)=line_structsIn(i).Outport;	% get the line connected to the block's Outport
		if (inLinesHan(i) ~= -1) % if exists
			dstBlock = get_param(inLinesHan(i),'DstBlockHandle'); % get the destination block's handle
			if (strcmp(get_param(dstBlock,'BlockType'),'BusSelector'))
				bussel_positions(i,:) = get_param(dstBlock,'Position'); % remember Bus Selector's position
				blockLineStructs = get_param(dstBlock,'LineHandles'); % get the line connected structures
				blockLineHandles = blockLineStructs.Outport; % get the line handlers connected to the bus's outports
				for j=1:length(blockLineHandles)
					if (blockLineHandles(j) ~= -1)
						delete(blockLineHandles(j));
					end
				end
				delete_block(dstBlock); % delete it if it is a Bus Selector Block
			end
			delete(inLinesHan(i)); % delete the respective line
		end
		delete_block(inportHan(i)); % delete the outdated inport block
	end
	% now remove the outports
	for i=1:length(outportHan)
		outports_positions(i,:) = get_param(outportHan(i),'Position'); % remember Outport's position
		line_structsOut(i)=get_param(outportHan(i),'LineHandles'); % get the structures
		outLinesHan(i)=line_structsOut(i).Inport;	% get the line connected to the block's Inport
		if (outLinesHan(i) ~= -1) % if exists
			srcBlock = get_param(outLinesHan(i),'SrcBlockHandle'); % get the source block's handle
			if (strcmp(get_param(srcBlock,'BlockType'),'BusCreator'))
				buscre_positions(i,:) = get_param(srcBlock,'Position'); % remember Bus Creator's position
				blockLineStructs = get_param(srcBlock,'LineHandles'); % get the line connected structures
				blockLineHandles = blockLineStructs.Inport; % get the line handlers connected to the bus's outports
				for j=1:length(blockLineHandles)
					if (blockLineHandles(j) ~= -1)
						delete(blockLineHandles(j));
					end
				end
				delete_block(srcBlock); % delete it if it is a Bus Creator Block
			end
			delete(outLinesHan(i)); % delete the respective line
	end
		delete_block(outportHan(i)); % delete the outdated outport block
	end
else
	simulink('open');
	new_system('controlAction3');
	open_system('controlAction3');
end
add_block('simulink/Sources/In1','controlAction3/posData3');
if inports_positions(1)>0
	set_param('controlAction3/posData3','Position', inports_positions(1,:));
else
	set_param('controlAction3/posData3','Position',[25 25 55 39]);
end
set_param('controlAction3/posData3','BusOutputAsStruct','on');
set_param('controlAction3/posData3','UseBusObject','on');
set_param('controlAction3/posData3','BusObject','MyPositionControlData');
add_block('simulink/Commonly Used Blocks/Bus Selector','controlAction3/posData3_MyPositionControlData_BusSel');
add_line('controlAction3','posData3/1','posData3_MyPositionControlData_BusSel/1');
setOutputsBusSelector(MyPositionControlData, 'controlAction3/posData3_MyPositionControlData_BusSel');
if bussel_positions(1)>0
	set_param('controlAction3/posData3_MyPositionControlData_BusSel','Position', bussel_positions(1,:));
else
	set_param('controlAction3/posData3_MyPositionControlData_BusSel','Position',[95 6 100 44]);
end
add_block('simulink/Sources/In1','controlAction3/sensorData3');
if inports_positions(2)>0
	set_param('controlAction3/sensorData3','Position', inports_positions(2,:));
else
	set_param('controlAction3/sensorData3','Position',[25 125 55 139]);
end
set_param('controlAction3/sensorData3','BusOutputAsStruct','on');
set_param('controlAction3/sensorData3','UseBusObject','on');
set_param('controlAction3/sensorData3','BusObject','MySensorData');
add_block('simulink/Commonly Used Blocks/Bus Selector','controlAction3/sensorData3_MySensorData_BusSel');
add_line('controlAction3','sensorData3/1','sensorData3_MySensorData_BusSel/1');
setOutputsBusSelector(MySensorData, 'controlAction3/sensorData3_MySensorData_BusSel');
if bussel_positions(2)>0
	set_param('controlAction3/sensorData3_MySensorData_BusSel','Position', bussel_positions(2,:));
else
	set_param('controlAction3/sensorData3_MySensorData_BusSel','Position',[95 106 100 144]);
end
add_block('simulink/Sources/In1','controlAction3/refData3');
if inports_positions(3)>0
	set_param('controlAction3/refData3','Position', inports_positions(3,:));
else
	set_param('controlAction3/refData3','Position',[25 225 55 239]);
end
set_param('controlAction3/refData3','BusOutputAsStruct','on');
set_param('controlAction3/refData3','UseBusObject','on');
set_param('controlAction3/refData3','BusObject','MyPositionControlData');
add_block('simulink/Commonly Used Blocks/Bus Selector','controlAction3/refData3_MyPositionControlData_BusSel');
add_line('controlAction3','refData3/1','refData3_MyPositionControlData_BusSel/1');
setOutputsBusSelector(MyPositionControlData, 'controlAction3/refData3_MyPositionControlData_BusSel');
if bussel_positions(3)>0
	set_param('controlAction3/refData3_MyPositionControlData_BusSel','Position', bussel_positions(3,:));
else
	set_param('controlAction3/refData3_MyPositionControlData_BusSel','Position',[95 206 100 244]);
end
add_block('simulink/Sinks/Out1','controlAction3/droneData3');
if outports_positions(1)>0
	set_param('controlAction3/droneData3','Position', outports_positions(1,:));
else
	set_param('controlAction3/droneData3','Position',[430 25 460 39]);
end
set_param('controlAction3/droneData3','UseBusObject','on');
set_param('controlAction3/droneData3','BusObject','MyDroneData');
add_block('simulink/Commonly Used Blocks/Bus Creator','controlAction3/droneData3_MyDroneData_BusCre');
add_line('controlAction3','droneData3_MyDroneData_BusCre/1','droneData3/1');
setInputsBusCreator(MyDroneData,'controlAction3/droneData3_MyDroneData_BusCre');
set_param('controlAction3/droneData3','UseBusObject','on');
set_param('controlAction3/droneData3','BusOutputAsStruct','on');
set_param('controlAction3/droneData3_MyDroneData_BusCre','BusObject','MyDroneData');
if buscre_positions(1)>0
	set_param('controlAction3/droneData3_MyDroneData_BusCre','Position', buscre_positions(1,:));
else
	set_param('controlAction3/droneData3_MyDroneData_BusCre','Position',[360 6 365 44]);
end
set_param('controlAction3/droneData3_MyDroneData_BusCre','UseBusObject','on');
set_param('controlAction3/droneData3_MyDroneData_BusCre','NonVirtualBus','on');
set_param('controlAction3','SaveOutput','off');
set_param('controlAction3','SignalLogging','off');
set_param('controlAction3','SaveTime','off')
set_param('controlAction3','Solver','FixedStepDiscrete');
set_param('controlAction3','SystemTargetFile','ert.tlc');
set_param('controlAction3','TemplateMakefile','ert_default_tmf');
set_param('controlAction3', 'PostCodeGenCommand', 'packNGo(buildInfo);');
set_param('controlAction3','StrictBusMsg','ErrorLevel1')
save_system('controlAction3');
close_system('controlAction3');
simulink('close');
