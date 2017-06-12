run Simulink_DataView_asn;

inports_positions = zeros(1, 4);
bussel_positions = zeros(1, 4);
outports_positions = zeros(1, 4);
buscre_positions = zeros(1, 4);

if (exist('DataOperation') == 4),
	simulink('open');
	load_system('DataOperation');
	open_system('DataOperation');
	inportHan = find_system('DataOperation','FindAll','on', 'SearchDepth', 1, 'BlockType','Inport');
	outportHan = find_system('DataOperation','FindAll','on', 'SearchDepth', 1, 'BlockType','Outport');
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
	new_system('DataOperation');
	open_system('DataOperation');
end
add_block('simulink/Sources/In1','DataOperation/Sensordata_in');
if inports_positions(1)>0
	set_param('DataOperation/Sensordata_in','Position', inports_positions(1,:));
else
	set_param('DataOperation/Sensordata_in','Position',[25 25 55 39]);
end
set_param('DataOperation/Sensordata_in','BusOutputAsStruct','on');
set_param('DataOperation/Sensordata_in','UseBusObject','on');
set_param('DataOperation/Sensordata_in','BusObject','MySensorData');
add_block('simulink/Commonly Used Blocks/Bus Selector','DataOperation/Sensordata_in_MySensorData_BusSel');
add_line('DataOperation','Sensordata_in/1','Sensordata_in_MySensorData_BusSel/1');
setOutputsBusSelector(MySensorData, 'DataOperation/Sensordata_in_MySensorData_BusSel');
if bussel_positions(1)>0
	set_param('DataOperation/Sensordata_in_MySensorData_BusSel','Position', bussel_positions(1,:));
else
	set_param('DataOperation/Sensordata_in_MySensorData_BusSel','Position',[95 6 100 44]);
end
add_block('simulink/Sinks/Out1','DataOperation/Sensordata_out');
if outports_positions(1)>0
	set_param('DataOperation/Sensordata_out','Position', outports_positions(1,:));
else
	set_param('DataOperation/Sensordata_out','Position',[430 25 460 39]);
end
set_param('DataOperation/Sensordata_out','UseBusObject','on');
set_param('DataOperation/Sensordata_out','BusObject','MySensorData');
add_block('simulink/Commonly Used Blocks/Bus Creator','DataOperation/Sensordata_out_MySensorData_BusCre');
add_line('DataOperation','Sensordata_out_MySensorData_BusCre/1','Sensordata_out/1');
setInputsBusCreator(MySensorData,'DataOperation/Sensordata_out_MySensorData_BusCre');
set_param('DataOperation/Sensordata_out','UseBusObject','on');
set_param('DataOperation/Sensordata_out','BusOutputAsStruct','on');
set_param('DataOperation/Sensordata_out_MySensorData_BusCre','BusObject','MySensorData');
if buscre_positions(1)>0
	set_param('DataOperation/Sensordata_out_MySensorData_BusCre','Position', buscre_positions(1,:));
else
	set_param('DataOperation/Sensordata_out_MySensorData_BusCre','Position',[360 6 365 44]);
end
set_param('DataOperation/Sensordata_out_MySensorData_BusCre','UseBusObject','on');
set_param('DataOperation/Sensordata_out_MySensorData_BusCre','NonVirtualBus','on');
set_param('DataOperation','SaveOutput','off');
set_param('DataOperation','SignalLogging','off');
set_param('DataOperation','SaveTime','off')
set_param('DataOperation','Solver','FixedStepDiscrete');
set_param('DataOperation','SystemTargetFile','ert.tlc');
set_param('DataOperation','TemplateMakefile','ert_default_tmf');
set_param('DataOperation', 'PostCodeGenCommand', 'packNGo(buildInfo);');
set_param('DataOperation','StrictBusMsg','ErrorLevel1')
save_system('DataOperation');
close_system('DataOperation');
simulink('close');
