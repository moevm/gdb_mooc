#include <stdio.h>
#include <stdbool.h>

float foo(){
	bool a=false;
	int b=1%5+2%6;
	float c=6%6-6%4;
	float d=4;
	float e=3%6;
	while(a){
		a=!a;
		while(d*b){
			d--;
		}
	}
bool f=true;
float g=6%6*6.7+5;

while(a&&!a){
	a=!a;
	while(g-b){
		g++;
	}
}
while(a&&!f){
	a=!a;
		while(!a&&a){
			a=!a;
	}
}

return a+b+c+d+e+f+g;
}

int main(){
	foo();
return 0;
}