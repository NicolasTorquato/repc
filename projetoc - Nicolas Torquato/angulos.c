#include <stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3;
	printf("Escreva os ângulos do triângulo: \n");
	printf("Escreva o primeiro ângulo: \n");
	scanf("%d", &lado1);
	printf("Escreva o segundo ângulo: \n");
	scanf("%d", &lado2);
	printf("Escreva o terceiro ângulo: \n");
	scanf("%d", &lado3);
	
	if ((lado1 == 90) || (lado2 == 90) || (lado3 == 90)){
		printf("O Triângulo é Reto! \n");
	} else{
		if ((lado1 > 90) || (lado2 > 90) || (lado3 > 90)){
			printf("O Triângulo é Obtusângulo! \n");
		} else {
			if ((lado1 < 90) && (lado2 < 90) && (lado3 < 90)){
				printf("O Triângulo é Acutângulo \n");
			}
		}
	}
	
	system("pause");
}
