
#include <stdio.h>
#include <assert.h>
#define MAXBUF 1024
#define DELIM "="

struct FlightPlan 
{    
char ID[MAXBUF];    
double heightToTakeoff;    
int loopNumber;    
char configLocations[MAXBUF];     
int nlocations;    
int nactions;
};

struct FormationConfig{   
	char shape[MAXBUF];   
	int members;   
	char configAgent[MAXBUF];   
	struct FlightPlan flightPlan;
};

struct FormationConfig get_configFile(char *filename) 
{        
struct FormationConfig configFormation;        

FILE *file = fopen (filename, "r");        
char buffer[10];  
      
if (file != NULL)      
{                 
	char line[MAXBUF];               
	int i = 0;               
	while(fgets(line, sizeof(line), file) != NULL) 
	{                       

		char *cfline;                       
		cfline = strstr((char *)line,DELIM);                       
		cfline = cfline + strlen(DELIM);                       
		
		switch(i)                       
		{                            
			case 0: memcpy(configFormation.shape, cfline,strlen(cfline)); break;                            
			case 1: 
			{   
				memcpy(buffer,cfline, 1);                                       
				configFormation.members=atoi(buffer);                                    
			} break;                            
			case 2: memcpy(configFormation.configAgent,cfline,strlen(cfline)); break;                            
			case 3: memcpy(configFormation.flightPlan.ID,cfline,strlen(cfline)); break;                            
			case 4:   
			{                                        
				memcpy(buffer, cfline, strlen(cfline));                                        
				configFormation.flightPlan.heightToTakeoff=atof(buffer);                                      
			}; break;                            
			case 5:   
			{
				memcpy(buffer,cfline, strlen(cfline));                                        
				configFormation.flightPlan.loopNumber=atoi(buffer);                                      
			}; break;                            
			case 6:   memcpy(configFormation.flightPlan.configLocations, cfline,strlen(cfline)); break;                            
			case 7: 
			{                                        
				memcpy(buffer,cfline, 5);                                        
				configFormation.flightPlan.nlocations=atoi(buffer);                                    
			} break;                        
		};                        
		i++;                
	} // End while                
	fclose(file);         
} // End if file        
else        
{            
	printf("file not found\n");                
}        
return configFormation;
}        


char** str_split(char* a_str, const char a_delim){    
char** result    = 0;    
size_t count     = 0;    
char* tmp        = a_str;    
char* last_comma = 0;    
char delim[2];    
delim[0] = a_delim;    
delim[1] = 0;    /* Count how many elements will be extracted. */    

while (*tmp)    
{        
	if (a_delim == *tmp)        
	{            
		count++;            
		last_comma = tmp;        
	}        
	tmp++;    
}    /* Add space for trailing token. */    

count += last_comma < (a_str + strlen(a_str) - 1);    /* Add space for terminating null string so caller       knows where the list of returned strings ends. */   
count++;    
result = malloc(sizeof(char*) * count);    
if (result)    
{        
	size_t idx  = 0;        
	char* token = strtok(a_str, delim);        
	while (token)        
	{            
		assert(idx < count);            
		*(result + idx++) = strdup(token);            
		token = strtok(0, delim);        
	}        
	assert(idx == count - 1);        
	*(result + idx) = 0;    
}    
return result;}


