#include <stdio.h>

int main() {
	int getal1;
	int getal2;
	int max = 2147483647;

	printf("Geef een getal");
	scanf_s("%d", &getal1);


	printf("Geef nog een getal");
	scanf_s("%d", &getal2);

	int getal3 = getal1 * getal2;
	if (getal3 < 0) {
		printf("Overflow");
	}
	else if (getal3 <= max) {
		printf("Het getal is %d", getal3);
	}

	else {
		printf("Overflow");
	}
}