#include <stdio.h>
int main(){
	float salario, renda;
	int cod, n=1, quant, comteplado=0;
	printf("Digite o salario minimo: ");
	scanf("%f", &salario);
	do{
		printf("Digite o cod do aluno: ");
		scanf("%d", &cod);
		printf("Renda familiar: ");
		scanf("%f", &renda);
		printf("Quantidade de pessoas: ");
		scanf("%d", &quant);
		if(renda/quant < salario)
			comteplado++;
		printf("Quer continuar? ()Sim-1 ou Nao-0)  ");
		scanf("%d", &n);
	}while(n != 0);
	printf("\n*** Quantidade de alunos comtemplados: %d ***",comteplado);
	return 0;
}
