//este programa ira mostra se o dinheiro é suficinte ou não, na compra de um livro em dolar
 
 #include<stdio.h> //biblioteca padra de entra e saida
 #include<stdlib.h> //biblioteca para executar em DOS
 #include<stdbool.h> //biblioteca para usar variaveis logicas
 
float converter(float d, float td); //função para converção de dolar para real
bool comparar(float disp, float livroReal); //função para comparar valores
void resultado(bool sufi, float livroReal, float disp); //variavel logica recebe - verdadeiro ou falso
 
 int main(){
 //declaração de variaveis	
 	
 	float valor_disp, livro_em_dolar, tx_dolar; //variaveis de entrada
 	float livro_em_real; //variavel de saida
 	bool suficiente; //variavel logica
 	
 	printf("Informe seu valor disponivel: R$");
 	scanf("%f" ,&valor_disp); 
 	printf("Informe o valor do livro em dolar: US$");
 	scanf("%f" ,&livro_em_dolar);
 	printf("Valor do dolar - hoje: R$");
 	scanf("%f" ,&tx_dolar);
 	
 	
//chamar a função para converter valor do livro de dolar para real


	livro_em_real = converter(livro_em_dolar, tx_dolar);
	
	
//chamar função para atribuir um valor booleano para valor suficiente

	suficiente = comparar(valor_disp, livro_em_real);
	


//procedimento para mostrar resultado 	
 	
 	resultado(suficiente, livro_em_real, valor_disp);
 	
 	printf("\n");
 	
 	system("pause");
 	return 0;
 }
 
 //função para converter valor logico em dolar para real 
 
 float converter(float d, float td) {
 	
 	float result; //variavel local
 	
 	result = d * td;
 	
 	return result;
 	
 }
 
//função para retornar valor booleano - saldo suficiente: verdadeiro ou falso

bool comparar(float disp, float livroReal){
	
	return livroReal <= disp;
	
}
 
//procedimento para exibir o resultado

void resultado(bool sufi, float livroReal, float disp){
	
	if (sufi){
		printf("\nTenho dinheiro sufieciente para comprar o livro!\n");
		printf("\nO valor do livro em Real: R$ %.2f\n" ,livroReal);
		printf("\nO dinheiro disponivel: R$ %.2f\n" ,disp);
		printf("\nSaldo restante: R$ %.2f\n" ,disp-livroReal);		
}
	else{
		printf("\nNao tenho dinheiro sufieciente para comprar o livro! \n");
		printf("\nO valor do livro em Real: R$ %.2f\n" ,livroReal);
		printf("\nO dinheiro disponivel: R$ %.2f\n" ,disp);
		printf("\nValor faltante para adquirir o livro: R$ %.2f\n" ,livroReal-disp);
	}	
}
 
 
 
 
 
