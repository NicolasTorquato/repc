#include <stdio.h>
#include <locale.h>
main (){
	setlocale(LC_ALL, "Portuguese");
	int valora, valorb, valorc;
	printf("Entre com o valor de a: ");
	scanf("%d", &valora);
	printf("Entre com o valor de b: ");
	scanf("%d", &valorb);
	printf("Entre com o valor de c: ");
	scanf("%d", &valorc);
	
	if ((valora > valorb) && (valorb > valorc)){
		printf("A sequência é: %d %d %d \n", valora, valorb, valorc);
	}
	if ((valora > valorc) && (valorc > valorb)){
		printf("A sequência é: %d %d %d \n", valora, valorc, valorb);
	}
	if ((valorb > valora) && (valora > valorc)){
		printf("A sequência é: %d %d %d \n", valorb, valora, valorc);
	}
	if ((valorb > valorc) && (valorc > valora)){
		printf("A sequência é: %d %d %d \n", valorb, valorc, valora);
	}
	if ((valorc > valora) && (valora > valorb)){
		printf("A sequência é: %d %d %d \n", valorc, valora, valorb);
	}
	if ((valorc > valorb) && (valorb > valora)){
		printf("A sequência é: %d %d %d \n", valorc, valorb, valora);
	}	
	
	
	system("pause");
}
