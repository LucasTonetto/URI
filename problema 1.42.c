#include <stdio.h>
 
int main() {

	int a, b, c, maior, menor, medio;
	
	scanf("%i %i %i", &a, &b, &c);
	
	if (a > b && a > c) {
		maior = a;
	} else if (b > a && b > c) {
		maior = b;
	} else {
		maior = c;
	}
	
	if (a < b && a < c) {
		menor = a;
	} else if (b < a && b < c) {
		menor = b;
	} else {
		menor = c;
	}
	
	if ((maior == a || maior == b) && (menor == a || menor == b)) {
		medio = c;
	} else if ((maior == b || maior == c) && (menor == b || menor == c)) {
		medio = a;
	} else {
		medio = b;
	}
	
	printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", menor,medio,maior,a,b,c);
	
    return 0;
}
