#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	float maca, preco;	
	printf("Oferta de Ma��s! R$0,30 em menos de uma d�zia e R$0,25 caso compre uma d�zia ou mais! \nDigite a quantidade de ma��s que deseja comprar: ");
	scanf("%f", &maca);
	
	if (maca < 12){
		preco = maca * 0.30;
		printf("O valor de sua compra ser� de: R$%f \n", preco);
	} if (maca >= 12){
		preco = maca * 0.25;
		printf("O valor de sua compra ser� de: R$%f \n", preco);
	}
	
	system("pause");
}
