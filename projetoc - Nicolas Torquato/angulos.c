#include <stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3;
	printf("Escreva os �ngulos do tri�ngulo: \n");
	printf("Escreva o primeiro �ngulo: \n");
	scanf("%d", &lado1);
	printf("Escreva o segundo �ngulo: \n");
	scanf("%d", &lado2);
	printf("Escreva o terceiro �ngulo: \n");
	scanf("%d", &lado3);
	
	if ((lado1 == 90) || (lado2 == 90) || (lado3 == 90)){
		printf("O Tri�ngulo � Reto! \n");
	} else{
		if ((lado1 > 90) || (lado2 > 90) || (lado3 > 90)){
			printf("O Tri�ngulo � Obtus�ngulo! \n");
		} else {
			if ((lado1 < 90) && (lado2 < 90) && (lado3 < 90)){
				printf("O Tri�ngulo � Acut�ngulo \n");
			}
		}
	}
	
	system("pause");
}
