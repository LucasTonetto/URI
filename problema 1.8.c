#include <stdio.h>
 
int main() {
 
	int numero, horas;
	float sal_hora, salario;
	
	scanf("%i %i %f", &numero, &horas, &sal_hora);

	salario = sal_hora * horas;
	
	printf("NUMBER = %i\nSALARY = U$ %.2f", numero, salario);
 
    return 0;
}
