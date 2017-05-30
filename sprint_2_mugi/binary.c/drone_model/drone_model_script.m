run Simulink_DataView_asn;

inports_positions = zeros(1, 4);
bussel_positions = zeros(1, 4);
outports_positions = zeros(1, 4);
buscre_positions = zeros(1, 4);

if (exist('Respond_state') == 4),
	simulink('open');
	load_system('Respond_state');
	open_system('Respond_state');
	inportHan = find_system('Respond_state','FindAll','on', 'SearchDepth', 1, 'BlockType','Inport');
	outportHan = find_system('Respond_state','FindAll','on', 'SearchDepth', 1, 'BlockType','Outport');
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
	new_system('Respond_state');
	open_system('Respond_state');
end
add_block('simulink/Sources/In1','Respond_state/PWM');
if inports_positions(1)>0
	set_param('Respond_state/PWM','Position', inports_positions(1,:));
else
	set_param('Respond_state/PWM','Position',[25 25 55 39]);
end
set_param('Respond_state/PWM','BusOutputAsStruct','on');
set_param('Respond_state/PWM','UseBusObject','on');
set_param('Respond_state/PWM','BusObject','MyPWM');
add_block('simulink/Commonly Used Blocks/Bus Selector','Respond_state/PWM_MyPWM_BusSel');
add_line('Respond_state','PWM/1','PWM_MyPWM_BusSel/1');
setOutputsBusSelector(MyPWM, 'Respond_state/PWM_MyPWM_BusSel');
if bussel_positions(1)>0
	set_param('Respond_state/PWM_MyPWM_BusSel','Position', bussel_positions(1,:));
else
	set_param('Respond_state/PWM_MyPWM_BusSel','Position',[95 6 100 44]);
end
add_block('simulink/Sinks/Out1','Respond_state/States');
if outports_positions(1)>0
	set_param('Respond_state/States','Position', outports_positions(1,:));
else
	set_param('Respond_state/States','Position',[430 25 460 39]);
end
set_param('Respond_state/States','UseBusObject','on');
set_param('Respond_state/States','BusObject','MyStates');
add_block('simulink/Commonly Used Blocks/Bus Creator','Respond_state/States_MyStates_BusCre');
add_line('Respond_state','States_MyStates_BusCre/1','States/1');
setInputsBusCreator(MyStates,'Respond_state/States_MyStates_BusCre');
set_param('Respond_state/States','UseBusObject','on');
set_param('Respond_state/States','BusOutputAsStruct','on');
set_param('Respond_state/States_MyStates_BusCre','BusObject','MyStates');
if buscre_positions(1)>0
	set_param('Respond_state/States_MyStates_BusCre','Position', buscre_positions(1,:));
else
	set_param('Respond_state/States_MyStates_BusCre','Position',[360 6 365 44]);
end
set_param('Respond_state/States_MyStates_BusCre','UseBusObject','on');
set_param('Respond_state/States_MyStates_BusCre','NonVirtualBus','on');
set_param('Respond_state','SaveOutput','off');
set_param('Respond_state','SignalLogging','off');
set_param('Respond_state','SaveTime','off')
set_param('Respond_state','Solver','FixedStepDiscrete');
set_param('Respond_state','SystemTargetFile','ert.tlc');
set_param('Respond_state','TemplateMakefile','ert_default_tmf');
set_param('Respond_state', 'PostCodeGenCommand', 'packNGo(buildInfo);');
set_param('Respond_state','StrictBusMsg','ErrorLevel1')
save_system('Respond_state');
close_system('Respond_state');
simulink('close');
