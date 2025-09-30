#include <stdio.h>

int main() {
	int n;

	printf("Voer een getal in: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d", i);
	}
}