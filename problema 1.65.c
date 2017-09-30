#include <stdio.h>
 
int main() {
 
	int n1, n2, n3, n4, n5, pares = 0;
	
	scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);
	
	if (n1 % 2 == 0) {
		pares++;
	}	
	if (n2 % 2 == 0) {
		pares++;
	}	
	if (n3 % 2 == 0) {
		pares++;
	}	
	if (n4 % 2 == 0) {
		pares++;
	}	
	if (n5 % 2 == 0) {
		pares++;
	}
	
	printf("%i valores pares\n", pares);
 
    return 0;
}
