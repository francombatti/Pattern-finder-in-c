#include "pattern_finder.h"
int is_palindrome(char line[]){
	for(int left = 0, right = strlen(line)-1; left < right; left++, right--)
		if(line[left] != line[right])
			return FALSE;
	return TRUE;//return true
}
