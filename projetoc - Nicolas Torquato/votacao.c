#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	int ano, idade, calculo;
	printf("Digite o ano em que voc� est� atualmente:");
	scanf("%d", &ano);
	printf("Digite o ano em que voc� nasceu:");
	scanf("%d", &idade);
	
	calculo = ano - idade;
	
	if (calculo < 16){
		printf("Voc� tem apenas %d anos, ent�o sua idade ainda � insuficiente para votar! \n", calculo);
	} if (calculo >= 16){
		printf("Voc� j� possui %d anos, ent�o sim, j� pode votar! \n", calculo);
	}
	
	system("pause");
}
