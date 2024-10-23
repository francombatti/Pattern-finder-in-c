#include "pattern_finder.h"
int is_arithmetic(char line[]){
	for(int i = 0; i < strlen(line)-1; i++){
		if(line[i + 1] != line[i] + 1){
			return FALSE;
		}
	}
	return TRUE;//return true
}
