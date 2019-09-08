#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char foo1(){
	return 'B';
}

char foo2(){
	return 'k';
}

int main(){
	unsigned int N = 122;
	char* res = (char*)malloc(sizeof(char)*3);
	*(res+1) = toupper("23al0sden"[N >> 3]);
	if((N >> 4) & ~(7/3 + 1)){
		*(res+2) = foo2();
	}
	else{
		*(res+2) = foo1();
	}
	*res = 43 + (((N & 5) | 2) << 2);	
	printf("%s\n",res);
	free(res);
	return 0;
}
