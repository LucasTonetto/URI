#include <stdio.h>
 
int main() {
 
	int x, cont = 0;
	
	scanf("%i", &x);
	
	while (cont != 6) {
		if (x % 2 != 0) {
			printf("%i\n", x);
			cont++;
		}
		x++;
	}
 
    return 0;
}
