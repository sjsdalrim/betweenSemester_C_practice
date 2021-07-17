/*
Conditional operator (조건 연산자 / 삼항 연산자) 
A ? B : C
if A is true, B
if A is false, C

*/

#include <stdio.h>

main() {
	
	int a;
	
	printf("if input a is smaller than 10, output became 0, else, output become 1\n");
	printf("input a : ");
	scanf("%d", &a);
	
	int output;
	
	output = ( (a<10) ? 0 : 1 );
	
	printf("\noutput : %d", output);
	
}
