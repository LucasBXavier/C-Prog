/*esse programa ira calcular o IMC de duas pessoas usando o peso e a altura, utilizando função e procedimento*/
#include<stdio.h>//biblioteca padrao input e output
#include<stdlib.h>//biblioteca pra rodar no prompt

float calcularImc(float peso, float altura); //declaração de função - retorna valor
void verificarImc(float imc); //declaração de procedimento  - não retorna valor

int main(){
//declaração de variaveis	
	float peso1, peso2, altura1, altura2; //variaveis de entrada
	float imc1, imc2; //variaveis de saida
		
	printf("Informe o peso (kg) da primeira pessoa:");
	scanf("%f" ,&peso1);
	printf("Informe a altura da primeira pessoa (M):");
	scanf("%f" ,&altura1);
	
	printf("Informe o peso (kg) da segunda pessoa:");
	scanf("%f" ,&peso2);
	printf("Informe a altura da segunda pessoa (M):");
	scanf("%f" ,&altura2);
	imc1 = calcularImc (peso1, altura1);
	imc2 = calcularImc (peso2, altura2);
	
	printf("\n");
	
	printf("O IMC da primeira pessoa: %.2f" ,imc1);
	verificarImc(imc1);
	printf("\n");
	printf("O IMC da segunda pessoa: %.2f" ,imc2);
	verificarImc(imc2);
	printf("\n");
	system("pause");	
	return 0;
}
//função de calcular o IMC

float calcularImc(float peso, float altura){
	
	float imc; //variavel local
	
	imc = peso/(altura * altura);
	
	return imc;
}

//procedimento - de exibir resultados

void verificarImc(float imc){
	
	if (imc < 18.5)
		printf("\nSua situacao: Magreza - precisa se alimentar!\n");
	if ((imc >= 18.5) && (imc <= 24.99))
		printf("\nSua situacao: peso normal - Parabens!\n");
	if ((imc >= 25) && (imc <= 29.99))
		printf("\nSua situação: Acima do peso - precisa emagracer!\n");
	if ((imc >= 30) && ( imc<= 34.99))	
		printf("\nSua situacao: Obesidade grau I - Precisa procurar um medico!\n");
	if ((imc >= 35) && ( imc<= 39.99))	
		printf("\nSua situacao: Obesidade grau II - Precisa procurar um medico!\n");
	if (imc >= 40)	
		printf("\nSua situacao: Obesidade grau III Morbida - Precisa procurar um medico URGENTE!\n");
}





