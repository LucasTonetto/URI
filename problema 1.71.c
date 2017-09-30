#include <stdio.h>
 
int main() {
 
	int x, y, resultado = 0;
	
	scanf("%i %i", &x, &y);
	
	y++;
	
	while (y < x) {
		if (y % 2 != 0) {
			resultado += y;
		}
		y++;
	}

	printf("%i\n", resultado);
 
    return 0;
}
