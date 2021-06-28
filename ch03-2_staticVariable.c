/*
Static variable

*/

#include <stdio.h>

void call() {
	static int calltime = 0;
	calltime++;
	
	printf("function called %d times\n", calltime);
}

main() {
	
	call();
	call();
	call();
	call();
	call();
	
}

