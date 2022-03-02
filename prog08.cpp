//programa que irá sortear numeros para jogar na mega sena

#include<stdlib.h>
#include<stdio.h>
#include<time.h> //permite criar numeros aleatorios
#include<locale.h> //permite usar palavras com acento

int main(){
	
int cont, num, n;	

setlocale(LC_ALL,"Portuguese_Brazil");
		
	srand(time(NULL)); //gerar numeros aleatorios
	
	printf("-----------------------------------\n");
	printf("Bem-Vindo ao gerador de números!\n");
	printf("-----------------------------------\n");
	
	printf("\nDigite a quantidade de números para a Mega Sena: ");
		scanf("%d" ,&n);
	
	printf("\nNúmeros gerados para a Mega Sena");
	
cont=1;
	while(cont<=n){
		num = 1 + rand()%60;
		printf("\n%d" ,num);
		cont++; //incremento -- cont = cont + 1
	}
printf("\n");
	
	
	
	
	system("pause");
	return 0;
}

