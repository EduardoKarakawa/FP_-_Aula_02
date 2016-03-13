#include <stdio.h>
#include <stdlib.h>

float const pi = 3.14f;

int main() {
	float D;
	printf("Digite o diametro: ");
	scanf_s("%f", &D);
	printf("A area do circulo e: %.2f\n\n", ((D / 2.0f)*(D / 2.0f))*pi);
	system("pause");
	return 0;
}