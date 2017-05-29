function []=setOutputsBusSelector(in_type, in_busSel)
	if(isa(in_type, 'Simulink.Bus'))
		s='';
		for i=1:length(in_type.Elements)
			s=strcat(s,in_type.Elements(i).name);
			if i < length(in_type.Elements)
				s=strcat(s, ',');
			end
		end
		set_param(in_busSel, 'OutputSignals', s);
	end
