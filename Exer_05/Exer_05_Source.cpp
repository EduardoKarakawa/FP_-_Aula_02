#include <stdio.h>
#include <stdlib.h>

int main() {
	float x, tresp;
	printf("Digite o preco do profuto:");
	scanf_s("%f", &x);
	tresp = x + (x*0.05f);
	printf("\nParcelas: 1 x R$%.2f (R$%.2f).\n", x - (x * 0.05f), x - (x * 0.05f));
	printf("\nParcelas: 2 x R$%.2f (R$%.2f).", x / 2.0f, x);
	printf("\nParcelas: 3 x R$%.2f (R$%.2f).", tresp / 3.0f, tresp);
	system("pause");
	return 0;
}