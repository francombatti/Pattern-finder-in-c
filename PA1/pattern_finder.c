#include "pattern_finder.h"
int main(){
	char line[LINE_LEN];
	while(fgets(line, LINE_LEN, stdin)){//fgets receives the whole line input
		int len = strlen(line);
		if(line[len-1] == '\n'){
			line[len-1] = '\0';
			len--;
		}

		if(is_singleton(line)) printf("Singleton\n");	
		if(is_arithmetic(line)) printf("Arithmetic\n");
		if(is_reversearithmetic(line)) printf("Reverse arithmetic\n");
		if(is_balancedtripartite(line)) printf("Balanced tripartite\n");
		if(is_balancedbipartite(line)) printf("Balanced bipartite\n");
		if(is_palindrome(line)) printf("Palindrome\n");
		
		
			
	
	
		putchar('\n');//add a new line just to separate the list of patterns for multiple inputs
	}
	return 0;
}
