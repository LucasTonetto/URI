#include <stdio.h>
 
int main() {
 
	int N, notas100, notas50, notas20, notas10, notas5, notas2, resto;
	
	scanf("%i", &N);
	
	notas100 = N / 100;
	resto = N % 100;
	notas50 = resto / 50;
	resto = resto % 50;
	notas20 = resto / 20;
	resto = resto % 20;
	notas10 = resto / 10;
	resto = resto % 10;
	notas5 = resto / 5;
	resto = resto % 5;
	notas2 = resto / 2;
	resto = resto % 2;
	
	printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", N, notas100, notas50, notas20, notas10, notas5, notas2, resto);
	
    return 0;
}
