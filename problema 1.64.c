#include <stdio.h>
 
int main() {
 
	float n1, n2, n3, n4, n5, n6, media = 0;
	int positivos = 0;
	
	scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);
	
	if (n1 > 0) {
		positivos++;
		media += n1;
	}	
	if (n2 > 0) {
		positivos++;
		media += n2;
	}	
	if (n3 > 0) {
		positivos++;
		media += n3;
	}	
	if (n4 > 0) {
		positivos++;
		media += n4;
	}	
	if (n5 > 0) {
		positivos++;
		media += n5;
	}	
	if (n6 > 0) {
		positivos++;
		media += n6;
	}
	
	media = media / positivos;
	
	printf("%i valores positivos\n", positivos);
	printf("%f\n", media);
 
    return 0;
}
