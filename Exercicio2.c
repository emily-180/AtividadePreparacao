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
	float salario, res;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	res = calcImposto(salario);
	printf("O total que deve ser paga: %.2f ", res);
}
