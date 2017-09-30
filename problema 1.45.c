#include <stdio.h>
 
int main() {
 
	float A, B, C, maior, aux;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if (B > A && B > C) {
		maior = B;	
		B = A;
	} else if (C > A && C > B) {
		maior = C;
		C = A;
	} else {
		maior = A;
	}
	
	A = maior;
	
	if (A >= B + C) {
		printf("NAO FORMA TRIANGULO\n");
	} else {
		if (pow(A, 2) == (pow(B, 2) + pow(C, 2))) {
			printf("TRIANGULO RETANGULO\n");
		} else if (pow(A, 2) > (pow(B, 2) + pow(C, 2))) {
			printf("TRIANGULO OBTUSANGULO\n");
		} else {
			printf("TRIANGULO ACUTANGULO\n");
		}	
		if (A == B && B == C && A == C) {
			printf("TRIANGULO EQUILATERO\n");
		} else if (A == B || C == B || A == C) {
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	
    return 0;
}
