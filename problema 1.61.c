#include <stdio.h>
 
int main() {
 
	char diaI[5], *diaInicio, diaF[5], *diaFim, horaI[11], *horaInicio, *minInicio, *segInicio, horaF[11], *horaFim, *minFim, *segFim;
	int numDiaI, numDiaF, numHoraI, numMinI, numSegI, numHoraF, numMinF, numSegF, durDia, durHora, durMin, durSeg;
	
	gets(diaI);
	gets(horaI);
	gets(diaF);
	gets(horaF);
	
	diaInicio = &diaI[4], &diaI[5];
	numDiaI = atoi(diaInicio);
	
	diaFim = &diaF[4], &diaF[5];
	numDiaF = atoi(diaFim);
	
	
	horaInicio = &horaI[0], &horaI[1];
	numHoraI = atoi(horaInicio);
	minInicio = &horaI[5], &horaI[6];
	numMinI = atoi(minInicio);
	segInicio = &horaI[10], &horaI[11];
	numSegI = atoi(segInicio);
	
	horaFim = &horaF[0], &horaF[1];
	numHoraF = atoi(horaFim);
	minFim = &horaF[5], &horaF[6];
	numMinF = atoi(minFim);
	segFim = &horaF[10], &horaF[11];
	numSegF = atoi(segFim);	
	
	durDia = numDiaF - numDiaI;
	durHora = numHoraF - numHoraI;

	if (durHora < 0) {
		durDia -= 1;
		durHora += 24;
	}

	durMin = numMinF - numMinI;
	
	if (durMin < 0) {
		durHora -= 1;
		durMin += 60;
	}
	if (durHora < 0) {
		durDia -= 1;
		durHora += 24;
	}
	
	durSeg = numSegF - numSegI;
	
	if (durSeg < 0) {
		durMin -= 1;
		durSeg += 60;
	}
	if (durMin < 0) {
		durHora -= 1;
		durMin += 60;
	}
	if (durHora < 0) {
		durDia -= 1;
		durHora += 24;
	}
	
	printf("%i dia(s)\n", durDia);
	printf("%i hora(s)\n", durHora);
	printf("%i minuto(s)\n", durMin);
	printf("%i segundo(s)\n", durSeg);
 
    return 0;
}
