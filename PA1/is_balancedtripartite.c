#include "pattern_finder.h"
int is_balancedtripartite(char line[]){
	if(strlen(line) % 3 != 0) return FALSE;
	for(int i = 0; i < strlen(line)/3; i++)
		if(line[i] != line[i + strlen(line)/3])
			return FALSE;
	return TRUE;//return FALSE
} 
