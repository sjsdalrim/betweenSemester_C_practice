/*

switch (variable) {
	case A:
		a ~~~;
	case B:
		b ~~~;
	default:
		c ~~~;
}

*/

#include <stdio.h> 

main() {
	
	int num;
	
	printf("Input any number (0~2) : ");
	scanf("%d", &num);
	
	switch (num) {
		case 0:
			printf("\ninput number is Zero");
			break;
		case 1:
			printf("\ninput number is One");
			break;
		case 2:
			printf("\ninput number is Two");
			break;
		case 3:
			printf("\ninput number is Three");
			break;
		default:
			printf("\nwrong input");
			break;
	}
	
}
