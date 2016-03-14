#include <stdio.h>
#include <stdlib.h>

int main() {
	int hip = 0, i=1, cat01, cat02, raiz;
	printf("Digite o primeiro cateto:");
	scanf_s("%i", &cat01);
	printf("Digite o segundo cateto:");
	scanf_s("%i", &cat02);
	raiz = (cat01*cat01) + (cat02*cat02);
	while (raiz >= i) {
		raiz = raiz - i;
		i = i + 2;
		hip = hip + 1;
	}
	printf("Hipotenusa do triangulo: %i\n", hip);
	system("pause");
	return 0;
}