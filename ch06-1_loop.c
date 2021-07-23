/*
//////////

for (int i = 0; i<100; i++) {

}

//////////

int i = 0;
while (i<100) {
	i++;
}

//////////

int i = 0;
do {
	i++;
} while (i<100);

//////////
*/

#include <stdio.h>

main() {
	
	for (int i = 0; i < 5; i++) {
		printf("%d ", i);
	}
	
	printf("\n");
	
	int j = 0;
	while (j < 5) {
		printf("%d ", j);
		j++;
	}
	
	printf("\n");
	
	int k = 0;
	do {
		printf("%d ", k);
		k++;
	} while (k < 5);
	
}
