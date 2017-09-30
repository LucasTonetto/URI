#include <stdio.h>
 
int main() {
 
	int a, b, c, MaiorAB;
	
	scanf("%i %i %i", &a, &b, &c);
	
	MaiorAB = (a + b + abs(a - b)) / 2;
	MaiorAB = (c + MaiorAB + abs(c - MaiorAB)) / 2;
	
	printf("%i eh o maior\n", MaiorAB);
	
    return 0;
}
