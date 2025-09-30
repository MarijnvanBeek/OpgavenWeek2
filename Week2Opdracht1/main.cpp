#include <stdio.h>

int main() {
	int getal1;
	int getal2;

	printf("Geef een getal");
	scanf_s("%d", &getal1);


	printf("Geef nog een getal");
	scanf_s("%d", &getal2);

	int getal3 = getal1 * getal2;
	if (getal3 < 214783647); {
		printf("Het getal is %d", getal3);
	}
	else
	{
		printf("overflow");
		}
		else printf("Het getal is %d", getal3);
}