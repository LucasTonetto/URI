#include <stdio.h>
 
int main() {
 
	char nome[10];
	double salario_fixo, total_vendas, TOTAL;
	
	scanf("%s %lf %lf", nome, &salario_fixo, &total_vendas);
	
	printf("%s", nome);
	
	TOTAL = salario_fixo + (total_vendas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	
    return 0;
}
