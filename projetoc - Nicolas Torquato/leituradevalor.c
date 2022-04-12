#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Escreva seu primeiro número:");
	scanf("%d", &n1);
	printf("Escreva seu segundo número:");
	scanf("%d", &n2);
	
	if (n1 > n2){
		printf("O maior número é: %d \n", n1);
	} if (n1 < n2){
		printf("O maior número é: %d \n", n2);
	} if (n1 == n2){
		printf("Ambos os Números, %d e %d são iguais.", n1, n2);
	}
	system("pause");
}
