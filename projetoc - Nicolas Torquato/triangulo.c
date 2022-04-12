#include <stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	int lado1, lado2, lado3;
	printf("Digite o tamanho do primeiro lado: ");
	scanf("%d", &lado1);
	printf("Digite o tamanho do segundo lado: ");
	scanf("%d", &lado2);
	printf("Digite o tamanho do terceiro lado: ");
	scanf("%d", &lado3);
	
	if ((lado1 == lado2) && (lado2 == lado3)){
		printf("Todos os lados são iguais, o triângulo é Equilátero! \n");
	} else {
		if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
			printf("Um dos lados é diferente, o triângulo é Isósceles! \n");
		} else {
		if ((lado1 != lado2) && (lado2 != lado3)){
				printf("Todos os lados são diferentes, o triângulo é Escaleno! \n");
			}	
		}
	} 
}
