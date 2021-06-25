/*
size of int data type

int = 4 byte
-> 4 byte = 32 bit

signed integer
max = 2^31 - 1 	=  2,147,483,647
min = - 2^31	= -2,147,483,648


long data type = 8 byte

*/

#include <stdio.h>

main() {
	
	int a, b, c, d;
	
	a = 2147483647;
	b = 2147483648;		// error 
	c = -2147483648;
	d = -2147483649;	// error
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	
}
