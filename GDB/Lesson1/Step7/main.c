#include <stdbool.h>
#include <stdio.h>

void bar5(){
	return;
}

void foo5(){
	return;
}

void bar4(){
	foo5();
	bar5();
}

void foo4(){
	bar4();
	bar4();
	foo5();
}

void foo3(){
	bar4();
	foo4();
}

void bar3(){
	foo4();
}

void bar2(){
	foo3();
}

void bar1(){
	foo3();
	bar3();
}

void foo2(){
	bar2();
}

void foo1(){
	foo2();
	bar1();
}

int main() {
	foo1();
  return 0;
}