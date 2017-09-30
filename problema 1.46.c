#include <stdio.h>
 
int main() {
 
	int inicio, fim, duracao;
	
	scanf("%i %i", &inicio, &fim);
	
	duracao = fim - inicio;
	
	if (duracao > 0) {
		printf("O JOGO DUROU %i HORA(S)\n", duracao);
	} else {
		duracao = fim + 24 - inicio;
		printf("O JOGO DUROU %i HORA(S)\n", duracao);
	}
	
    return 0;
}
