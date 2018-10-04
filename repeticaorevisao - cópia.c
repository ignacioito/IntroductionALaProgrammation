//
// Estrutura de repeticao
//

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	int soma, valor;
	char sn;
	
	while(sn == 'S'){
	printf("Digite um valor: \n");
	scanf("%d\n", &valor);
	printf("Quer continuar? S/N\n");
	scanf(" %c", &sn);
	soma = (soma + valor);
	}
	printf("%d\n", soma);
}

