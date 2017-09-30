#include <stdio.h>
 
int main() {
 
	int n1, n2, n3, n4, n5, pares = 0, impares = 0, positivos = 0, negativos = 0;
	
	scanf("%i %i %i %i %i", &n1, &n2, &n3, &n4, &n5);
	
	if (n1 % 2 == 0) {
		pares++;
	} else {
		impares++;
	}	
	if (n2 % 2 == 0) {
		pares++;
	} else {
		impares++;
	}
	if (n3 % 2 == 0) {
		pares++;
	} else {
		impares++;
	}	
	if (n4 % 2 == 0) {
		pares++;
	} else {
		impares++;
	}	
	if (n5 % 2 == 0) {
		pares++;
	} else {
		impares++;
	}	
	
	if (n1 > 0) {
		positivos++;
	} else if (n1 < 0) {
		negativos++;
	}	
	if (n2 > 0) {
		positivos++;
	} else if (n2 < 0) {
		negativos++;
	}	
	if (n3 > 0) {
		positivos++;
	} else if (n3 < 0) {
		negativos++;
	}	
	if (n4 > 0) {
		positivos++;
	} else if (n4 < 0) {
		negativos++;
	}	
	if (n5 > 0) {
		positivos++;
	} else if (n5 < 0) {
		negativos++;
	}	
	
	printf("%i valor(es) par(es)\n", pares);	
	printf("%i valor(es) impar(es)\n", impares);	
	printf("%i valor(es) positivo(s)\n", positivos);	
	printf("%i valor(es) negativo(s)\n", negativos);
 
    return 0;
}
