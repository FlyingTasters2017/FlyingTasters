function []=setInputsBusCreator(in_type, in_busCrea)
	if(isa(in_type, 'Simulink.Bus'))
		s='';
		if(length(in_type.Elements)==1);
			set_param(in_busCrea, 'Inputs', '1');
		else			for i=1:length(in_type.Elements)
				s=strcat(s,in_type.Elements(i).name);
				if i < length(in_type.Elements)
					s=strcat(s, ',');
				end
			end
			set_param(in_busCrea, 'Inputs', s);
		end
	end
