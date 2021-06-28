/*
Function

*/

#include <stdio.h>

int times10(int x) {
	int result = x * 10;
	
	return result;
}

main() {
	
	int a = 1, b = 3, c = 5;
	
	printf("%d\n", times10(a));
	printf("%d\n", times10(b));
	printf("%d\n", times10(c));
}
