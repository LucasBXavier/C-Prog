/* o programa vai receber o salario de 1 funcionario e calculará um novo salario bruto,m sofrendo aumento de acordo 
com a faixa salarial e com desconto de 0.5% de imposto para o compor o salario linquido
-------------------------------------------------------------------------------------------------------------------
|para salario <== 3.000,00 terá um aumento de 15,45%          	                                                  |
-------------------------------------------------------------------------------------------------------------------
| para salario > 3.000,00 e salario <== 5.500,00 aumernto de 10,15%											      |
-------------------------------------------------------------------------------------------------------------------
| para salario > 5.500,00 aumento de 7,5%	                                                                      |
-------------------------------------------------------------------------------------------------------------------
*/

#include<stdlib.h>
#include<stdio.h>


int main(){
	
float sal_atual; //entrada de dados
float sal_novo_bruto, sal_novo_bruto_desc, sal_liquido, imposto, impostob, aumento; //saida de dados
	
	printf("Informe seu salario: R$");
	scanf("%f" ,&sal_atual);
	
	
//estrutura condicional encadeada

	if(sal_atual <= 3000.00){
		aumento = sal_atual*15.45/100;
	}
	
	 // se o salario for maior que 3000.00
	else{
		if(sal_atual <= 5500.00){
		
			aumento = sal_atual*10.15/100;
		}
		else{ //salario maior que 5k
				aumento = sal_atual*7.5/100;
			}
	}
	
//calculos

	sal_novo_bruto = sal_atual + aumento;
	imposto = sal_novo_bruto * 9.5/100;
	sal_liquido = sal_novo_bruto - imposto;
	impostob = sal_atual * 9.5/100;
	sal_novo_bruto_desc = sal_atual - imposto;
	
	
	
	
// exibir resultados

	printf("Salario atual: R$%.2f\n" ,sal_atual);
	printf("\nSalario atual com desconto: R$%.2f\n" ,sal_novo_bruto_desc);
	printf("\nSalario novo sem desconto: R$%.2f\n" ,sal_novo_bruto);
	printf("\nSalario liquido com desconto: R$%.2f\n" ,sal_liquido);
	
	printf("\n");
	
	system("pause");
	return 0;
}
