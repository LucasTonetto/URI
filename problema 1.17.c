#include <stdio.h>
 
int main() {
 
	int tempo, vm;
	float litros;
	
	scanf("%i %i", &tempo, &vm);
	
	litros = tempo * vm / 12.0;
	
	printf("%.3f\n", litros);
	
    return 0;
}
