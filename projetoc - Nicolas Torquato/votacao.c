#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	int ano, idade, calculo;
	printf("Digite o ano em que você está atualmente:");
	scanf("%d", &ano);
	printf("Digite o ano em que você nasceu:");
	scanf("%d", &idade);
	
	calculo = ano - idade;
	
	if (calculo < 16){
		printf("Você tem apenas %d anos, então sua idade ainda é insuficiente para votar! \n", calculo);
	} if (calculo >= 16){
		printf("Você já possui %d anos, então sim, já pode votar! \n", calculo);
	}
	
	system("pause");
}
