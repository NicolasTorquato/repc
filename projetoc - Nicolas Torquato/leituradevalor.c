#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2;
	printf("Escreva seu primeiro n�mero:");
	scanf("%d", &n1);
	printf("Escreva seu segundo n�mero:");
	scanf("%d", &n2);
	
	if (n1 > n2){
		printf("O maior n�mero �: %d \n", n1);
	} if (n1 < n2){
		printf("O maior n�mero �: %d \n", n2);
	} if (n1 == n2){
		printf("Ambos os N�meros, %d e %d s�o iguais.", n1, n2);
	}
	system("pause");
}
