run Simulink_DataView_asn;

inports_positions = zeros(2, 4);
bussel_positions = zeros(2, 4);
outports_positions = zeros(1, 4);
buscre_positions = zeros(1, 4);

if (exist('calc_control') == 4),
	simulink('open');
	load_system('calc_control');
	open_system('calc_control');
	inportHan = find_system('calc_control','FindAll','on', 'SearchDepth', 1, 'BlockType','Inport');
	outportHan = find_system('calc_control','FindAll','on', 'SearchDepth', 1, 'BlockType','Outport');
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
	new_system('calc_control');
	open_system('calc_control');
end
add_block('simulink/Sources/In1','calc_control/control_error');
if inports_positions(1)>0
	set_param('calc_control/control_error','Position', inports_positions(1,:));
else
	set_param('calc_control/control_error','Position',[25 25 55 39]);
end
set_param('calc_control/control_error','BusOutputAsStruct','on');
set_param('calc_control/control_error','UseBusObject','on');
set_param('calc_control/control_error','BusObject','Trajectory');
add_block('simulink/Commonly Used Blocks/Bus Selector','calc_control/control_error_Trajectory_BusSel');
add_line('calc_control','control_error/1','control_error_Trajectory_BusSel/1');
setOutputsBusSelector(Trajectory, 'calc_control/control_error_Trajectory_BusSel');
if bussel_positions(1)>0
	set_param('calc_control/control_error_Trajectory_BusSel','Position', bussel_positions(1,:));
else
	set_param('calc_control/control_error_Trajectory_BusSel','Position',[95 6 100 44]);
end
add_block('simulink/Sources/In1','calc_control/processed_world_data');
if inports_positions(2)>0
	set_param('calc_control/processed_world_data','Position', inports_positions(2,:));
else
	set_param('calc_control/processed_world_data','Position',[25 125 55 139]);
end
set_param('calc_control/processed_world_data','BusOutputAsStruct','on');
set_param('calc_control/processed_world_data','UseBusObject','on');
set_param('calc_control/processed_world_data','BusObject','WorldData');
add_block('simulink/Commonly Used Blocks/Bus Selector','calc_control/processed_world_data_WorldData_BusSel');
add_line('calc_control','processed_world_data/1','processed_world_data_WorldData_BusSel/1');
setOutputsBusSelector(WorldData, 'calc_control/processed_world_data_WorldData_BusSel');
if bussel_positions(2)>0
	set_param('calc_control/processed_world_data_WorldData_BusSel','Position', bussel_positions(2,:));
else
	set_param('calc_control/processed_world_data_WorldData_BusSel','Position',[95 106 100 144]);
end
add_block('simulink/Sinks/Out1','calc_control/control_data');
if outports_positions(1)>0
	set_param('calc_control/control_data','Position', outports_positions(1,:));
else
	set_param('calc_control/control_data','Position',[430 25 460 39]);
end
set_param('calc_control/control_data','UseBusObject','on');
set_param('calc_control/control_data','BusObject','DroneControllerInput');
add_block('simulink/Commonly Used Blocks/Bus Creator','calc_control/control_data_DroneControllerInput_BusCre');
add_line('calc_control','control_data_DroneControllerInput_BusCre/1','control_data/1');
setInputsBusCreator(DroneControllerInput,'calc_control/control_data_DroneControllerInput_BusCre');
set_param('calc_control/control_data','UseBusObject','on');
set_param('calc_control/control_data','BusOutputAsStruct','on');
set_param('calc_control/control_data_DroneControllerInput_BusCre','BusObject','DroneControllerInput');
if buscre_positions(1)>0
	set_param('calc_control/control_data_DroneControllerInput_BusCre','Position', buscre_positions(1,:));
else
	set_param('calc_control/control_data_DroneControllerInput_BusCre','Position',[360 6 365 44]);
end
set_param('calc_control/control_data_DroneControllerInput_BusCre','UseBusObject','on');
set_param('calc_control/control_data_DroneControllerInput_BusCre','NonVirtualBus','on');
set_param('calc_control','SaveOutput','off');
set_param('calc_control','SignalLogging','off');
set_param('calc_control','SaveTime','off')
set_param('calc_control','Solver','FixedStepDiscrete');
set_param('calc_control','SystemTargetFile','ert.tlc');
set_param('calc_control','TemplateMakefile','ert_default_tmf');
set_param('calc_control', 'PostCodeGenCommand', 'packNGo(buildInfo);');
set_param('calc_control','StrictBusMsg','ErrorLevel1')
save_system('calc_control');
close_system('calc_control');
simulink('close');
