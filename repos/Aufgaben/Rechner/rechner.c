#include <stdio.h>

int main(){
	float liter, strecke;

	printf("Geben Sie den Verbrauch auf 100km an:\n");
	scanf("%f", &liter);
	printf("Geben Sie die gefahrene Strecke an:\n");
	scanf("%f", &strecke);
	printf("Sie haben %f Liter verbraucht\n\n", strecke/100*liter);

	return 0;
	}
