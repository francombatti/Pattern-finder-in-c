#include "pattern_finder.h"
int is_balancedbipartite(char line[]){
	if(strlen(line) % 2 != 0) return FALSE;
	for(int i = 0; i < strlen(line)/2; i++)
		if(line[i] != line[i + strlen(line)/2])
			return FALSE;
	return TRUE;//return FALSE
} 
