/*
bit operator

& (AND)
| (OR)
^ (XOR)
~ (tild, 1's complement)
<<, >> (bit shift operator)

*/

main() {
	
	int a = 178; // 178 = 10110010(2)
	int b = 104; // 104 = 01101011(2)
	
	printf("%d & %d = %d\n", a, b, (a & b) );
	printf("%d | %d = %d\n", a, b, (a | b) );
	printf("%d ^ %d = %d\n", a, b, (a ^ b) );
	printf("~%d = %d\n", a, ~a );
	
}
