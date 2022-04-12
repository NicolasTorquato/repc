#include<stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	
	float maca, preco;	
	printf("Oferta de Maçãs! R$0,30 em menos de uma dúzia e R$0,25 caso compre uma dúzia ou mais! \nDigite a quantidade de maçãs que deseja comprar: ");
	scanf("%f", &maca);
	
	if (maca < 12){
		preco = maca * 0.30;
		printf("O valor de sua compra será de: R$%f \n", preco);
	} if (maca >= 12){
		preco = maca * 0.25;
		printf("O valor de sua compra será de: R$%f \n", preco);
	}
	
	system("pause");
}
