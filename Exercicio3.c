#include <stdio.h>
int calcImposto(float salario){
	float imposto = 0;
	if(salario > 1903.99 && salario <= 2826.65)
		imposto =  salario * (7.5/100);
	else if(salario > 2826.66 && salario <= 3751.05 )
		imposto =  salario * (15/100);
	else if(salario > 3751.06 && salario <= 4664.68)
		imposto =  salario * (22.5/100);
	else if(salario > 4664.68)
		imposto =  salario * (27.5/100);
	return imposto;	
}
int main(){
	float res=0, salario, totalEmpresa[1000], soma=0;
	int quant, i;
	printf("Digite a quantidade de funcionarios: ");
	scanf("%d", &quant);
	//entrada de salarios
	for(i=0; i < quant; i++){
		printf("Digite o salario: ");
		scanf("%f", &salario);
		//chamado função para ter o valor retido
		res = calcImposto(salario);
		//colocando no vetor da empresa
		totalEmpresa[i]= res;
	}
	//somando os valores retidos		
	for(i=0; i < quant; i++)
		soma+=totalEmpresa[i];
	//relatorio do valor
	printf("\n***** Relatorio do Valor Retido *****\n");
	for(i=0; i < quant; i++)
		printf("Salario[0] = %.2f\n",totalEmpresa[i]);
	printf("Soma Total do valor retido: %.2f", soma);
}
