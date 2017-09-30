#include <stdio.h>
 
int main() {
 
	int x, cont = 1;
	
	scanf("%i", &x);
	
	while (cont <= x) {
		if (cont % 2 != 0) {
			printf("%i\n", cont);
		}
		cont++;
	}
 
    return 0;
}
