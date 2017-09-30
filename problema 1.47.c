#include <stdio.h>
 
int main() {
 
	int horaI, horaF, minI, minF, duracaoH, duracaoM;
	
	scanf("%i %i %i %i", &horaI, &minI, &horaF, &minF);
	
	duracaoH = horaF - horaI;
	duracaoM = minF - minI;
	
	if (duracaoM < 0) {
		duracaoM = minF - minI + 60;
		duracaoH = duracaoH - 1;
	} else if ( horaI == horaF && minI == minF) {
		duracaoH = 24;
	}
	
	printf ("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", duracaoH, duracaoM);
	
    return 0;
}
