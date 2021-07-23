/*
Á¶°Ç¹®
if ~ else if ~ else

*/

#include <stdio.h> 

main() {
	
	int score;
	char gradePoint;
	
	printf("Input your test score : ");
	scanf("%d", &score);
	
	if (score > 90) {
		gradePoint = 'A';
	} else if (score > 80) {
		gradePoint = 'B';
	} else if (score > 70) {
		gradePoint = 'C';
	} else if (score > 60) {
		gradePoint = 'D';
	} else {
		gradePoint = 'F';
	}
	
	printf("\ntour Grade point : %c", gradePoint);
	
}
