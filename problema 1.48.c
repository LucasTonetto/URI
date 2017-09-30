#include <stdio.h>
 
int main() {
 
	float sal, novo_sal, reajuste;
	int percentual;
	
	scanf("%f", &sal);
	
	if (sal > 0 && sal <= 400) {
		percentual = 15;
		reajuste = sal * 0.15;
		novo_sal = sal * 1.15;
	} else if (sal >= 400.01 && sal <= 800) {
		percentual = 12;
		reajuste = sal * 0.12;
		novo_sal = sal * 1.12;
	} else if (sal >= 800.01 && sal <= 1200) {
		percentual = 10;
		reajuste = sal * 0.1;
		novo_sal = sal * 1.1;
	} else if (sal >= 1200.01 && sal <= 2000) {
		percentual = 7;
		reajuste = sal * 0.07;
		novo_sal = sal * 1.07;
	} else {
		percentual = 4;
		reajuste = sal * 0.04;
		novo_sal = sal * 1.04;
	}
	
	printf("Novo salario: %.2f\n", novo_sal);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %i %%\n", percentual);
	
    return 0;
}
