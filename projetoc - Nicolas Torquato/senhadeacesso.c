#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	int senha;
	printf("Digite a sua senha de 4 dígitos: \n");
	scanf("%d", &senha);
	
	if (senha == 1234){
		printf("ACESSO PERMITIDO \n");
	} else {
		printf("ACESSO NEGADO \n");
	}
	system("pause");
}
