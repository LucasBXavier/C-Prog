//Calculador de IMC

#include<stdlib.h> //biblioteca usada para executar o programa em DOS
#include<stdio.h> //biblioteca padrão de entrada e saida de dados

//inicio do programa principal
int main(){
//declaração das variaveis
	float peso, altura;	//variaveis de entrada
	float imc; //variavel de saida
	char nome[20];
	printf("Bem-Vindo ao calculador de IMC. \n");
	
	printf("\nInforme seu nome:");
	scanf("%s",&nome);
 	printf("\nDigite seu peso (KG):");
	scanf("%f",&peso);
	printf("\nDigite sua altura:");
	scanf("%f",&altura);
	
	imc = peso/(altura * altura);
	
	printf("%s seu IMC = %.2f \n" ,nome, imc);
	
	system("pause");
	
	return 0;
}

