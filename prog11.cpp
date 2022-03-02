#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int numero, multi;
	
	printf("Digite o numero da Tabuada:");
		scanf("%d" ,&numero);
	
	for (int i = 0; i < 11; i++){
		
		multi = numero*i;
	printf("\n%d x %d = %d" ,numero,i,multi);
	}
	printf("\n");
	printf("\nFim da tabuada\n");
	
	
	system("pause");
	return 0;
}
