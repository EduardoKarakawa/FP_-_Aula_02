#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario;
	printf("Digite o salario: ");
	scanf_s("%f", &salario);
	printf("Vc ganha %.2f salario(s) minimo.\n", salario / 880.0f);
	system("pause");
	return 0;
}