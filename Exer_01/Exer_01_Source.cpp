#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	printf("Digite um numero:");
	scanf_s("%i", &x);
	printf("Antecessor: %i\nSucessor: %i\n\n", x - 1, x + 1);
	system("pause");
	return 0;
}