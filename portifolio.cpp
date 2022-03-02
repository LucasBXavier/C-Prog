/*Lucas Boareto Xavier Ra: 240872021
 Programa para zoologico */
 
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

float calc_qtd_kg_animal (float qtd_animal1, float kg_por_dia1);
float calc_cons_dia(float qtd_animal1, float kilo_dia1);
float calc_cons_mes(float qtd_por_dia1);
float calc_cust_mes(float qtd_por_mes1, float valor_do_kilo1);

//programa principal

int main(){
	
setlocale(LC_ALL,"Portuguese_Brazil");


	char tipo_animal[30] ; //variavel de entrada
	float qtd_animal, kg_por_dia,valor_kg; //variavel de entrada
	float qtdKilo, qtd_por_dia, qtd_por_mes, custoMensal; //variavel de saida
	
	printf("Qual o tipo do animal:");
		scanf("%s" ,&tipo_animal);
	printf("\nQuantos animais desse tem:");
		scanf("%f" ,&qtd_animal);
	printf("\nQuantidade de kilo por dia: kg ");
		 scanf("%f",&kg_por_dia);
	printf("\nQual o valor do Kilo: R$");
		scanf("%f" ,&valor_kg);	
	printf("\n");
		
//calculos
     qtdKilo = calc_qtd_kg_animal(qtd_animal, kg_por_dia);
     qtd_por_dia = calc_cons_dia(qtd_animal, kg_por_dia);
     qtd_por_mes = calc_cons_mes(qtd_por_dia);
	 custoMensal = calc_cust_mes(qtd_por_mes, valor_kg);
	
	
	printf("Quantidade em (kg) que o %s consome: %.2f" ,tipo_animal,qtdKilo);	
	printf("\nQuantidade em (kg) que %s consome por dia: %.2f" ,tipo_animal,qtd_por_dia);
	printf("\nQuantidade em (kg) que %s consome por mes: %.2f" ,tipo_animal,qtd_por_mes);
	printf("\nO custo mensal com a alimentação: R$ %.2f\n" ,custoMensal);
	printf("\n");
	
	
	system("pause");
	return 0;
}


//função de calculo
 

float calc_qtd_kg_animal(float qtd_animal1, float kg_por_dia1){

    float kg_por_animal;//variavel local
    
    kg_por_animal = kg_por_dia1 / qtd_animal1;
    
    return kg_por_animal;
}

float calc_cons_dia(float qtd_animal1, float kg_por_dia1){

    float qtd_por_dia;//variavel local
    
    qtd_por_dia = qtd_animal1 * kg_por_dia1;
    
    return qtd_por_dia;
      
}

float calc_cons_mes(float qtd_por_dia1){

    float qtd_mes;//variavel local
    
    qtd_mes = qtd_por_dia1 * 30;
    
    return qtd_mes;
}

float calc_cust_mes(float qtd_por_mes1, float valor_kg_comida1){

    float valor_mes;//variavel local
    
    valor_mes = qtd_por_mes1 * valor_kg_comida1;
    
    return valor_mes;
}






