#include "pattern_finder.h"
int is_singleton(char line[]){
	for(int i = 0; i < strlen(line)-1; i++)
		if(line[i] != line[i + 1])
			return FALSE;
	return TRUE;//return FALSE
} 
