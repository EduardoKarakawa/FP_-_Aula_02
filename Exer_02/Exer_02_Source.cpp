#include <stdio.h>
#include <stdlib.h>

int main() {
	int ano;
	printf("Digite o ano que vc nasceu: ");
	scanf_s("%i", &ano);
	printf("Vc tem ou tera %i de idade no ano 2016.\n\n", 2016 - ano);
	system("pause");
	return 0;
}