#include <stdio.h>
 
int main() {
 
	int cod1, cod2, n1, n2;
	float preco1, preco2, total;
	
	scanf("%i %i %f", &cod1, &n1, &preco1);
	scanf("%i %i %f", &cod2, &n2, &preco2);	
	
	total = n1 * preco1 + n2 * preco2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
    return 0;
}
