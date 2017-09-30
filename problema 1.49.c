#include <stdio.h>
 
int main() {
 
	char tipo1[50], tipo2[50], tipo3[50];
	
	
	scanf("%s %s %s", &tipo1, &tipo2, &tipo3);
	
	if (strcmp (tipo1, "vertebrado") == 0) {
		if (strcmp (tipo2, "ave") == 0) {
			if (strcmp (tipo3, "carnivoro") == 0) {
				printf("aguia\n");
			} else if (strcmp (tipo3, "onivoro") == 0) {
				printf("pomba\n");
			}
		} else if (strcmp (tipo2, "mamifero") == 0) {
			if (strcmp (tipo3, "onivoro") == 0) {
				printf("homem\n");
			} else if (strcmp (tipo3, "herbivoro") == 0) {
				printf("vaca\n");
			}
		}
	} else if (strcmp (tipo1, "invertebrado") == 0) {
		if (strcmp (tipo2, "inseto") == 0) {
			if (strcmp (tipo3, "hematofago") == 0) {
				printf("pulga\n");
			} else if (strcmp (tipo3, "herbivoro") == 0) {
				printf("lagarta\n");
			}
		} else if (strcmp (tipo2, "anelideo") == 0) {
			if (strcmp (tipo3, "hematofago") == 0) {
				printf("sanguessuga\n");
			} else if (strcmp (tipo3, "onivoro") == 0) {
				printf("minhoca\n");
			}
		}
	}
	
    return 0;
}
