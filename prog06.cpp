//calculadora de 2 numeros usando switch()

#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int opcao;
	float num1, num2, result;
	
//criar menu
	printf("-----------------------------\n");
	printf("Menu - Calculadora Simples\n");
	printf("\n");
	printf("1 - Soma \n");
	printf("2 - Subtracao \n");
	printf("3 - multiplicacao \n");
	printf("4 - divisao \n");
	printf("-----------------------------\n");
	printf("\nEscolha a opcao desejada:");
		scanf("%d" ,&opcao);
	printf("Digite o primeiro numero: ");
		scanf("%f" ,&num1);
	printf("Digite o segundo numero: ");
		scanf("%f" ,&num2);
	printf("\n");
	
	
	
//switch()
	switch(opcao){
		
		case 1:
			result = num1 + num2;
			printf("\nResultado da soma de dois numeros: %.2f" ,result);
		break;
		
		case 2:
			result = num1 - num2;
			printf("\nResultado da subtraca de dois numeros: %.2f" ,result);
		break;
		
		case 3:
			result = num1 * num2;
			printf("\nResultado da multiplicacao de dois numeros: %.2f" ,result);
		break;
		
		case 4:
			result = num1 / num2;
			printf("\nResultado da divisao de dois numeros: %.2f" ,result);
		break;	
	default:	//caso nao seja uma das opcoes
		printf("\nOpcao invalida!");
	}
	
	printf("\nFim do programa!!\n");
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
