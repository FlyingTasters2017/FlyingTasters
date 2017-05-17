run Simulink_DataView_asn;

inports_positions = zeros(1, 4);
bussel_positions = zeros(1, 4);
outports_positions = zeros(1, 4);
buscre_positions = zeros(1, 4);

if (exist('Compute_Thrust') == 4),
	simulink('open');
	load_system('Compute_Thrust');
	open_system('Compute_Thrust');
	inportHan = find_system('Compute_Thrust','FindAll','on', 'SearchDepth', 1, 'BlockType','Inport');
	outportHan = find_system('Compute_Thrust','FindAll','on', 'SearchDepth', 1, 'BlockType','Outport');
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
	new_system('Compute_Thrust');
	open_system('Compute_Thrust');
end
add_block('simulink/Sources/In1','Compute_Thrust/Inp');
if inports_positions(1)>0
	set_param('Compute_Thrust/Inp','Position', inports_positions(1,:));
else
	set_param('Compute_Thrust/Inp','Position',[25 25 55 39]);
end
set_param('Compute_Thrust/Inp','BusOutputAsStruct','on');
set_param('Compute_Thrust/Inp','DataType','Specify via Dialog');
set_param('Compute_Thrust/Inp','OutDataType','MyInteger');
add_block('simulink/Sinks/Out1','Compute_Thrust/Outp');
if outports_positions(1)>0
	set_param('Compute_Thrust/Outp','Position', outports_positions(1,:));
else
	set_param('Compute_Thrust/Outp','Position',[430 25 460 39]);
end
set_param('Compute_Thrust/Outp','DataType','Specify via Dialog');
set_param('Compute_Thrust/Outp','OutDataType','MyInteger');
set_param('Compute_Thrust','SaveOutput','off');
set_param('Compute_Thrust','SignalLogging','off');
set_param('Compute_Thrust','SaveTime','off')
set_param('Compute_Thrust','Solver','FixedStepDiscrete');
set_param('Compute_Thrust','SystemTargetFile','ert.tlc');
set_param('Compute_Thrust','TemplateMakefile','ert_default_tmf');
set_param('Compute_Thrust', 'PostCodeGenCommand', 'packNGo(buildInfo);');
set_param('Compute_Thrust','StrictBusMsg','ErrorLevel1')
save_system('Compute_Thrust');
close_system('Compute_Thrust');
simulink('close');
