//
// Estrutura de repeticao
// Soma entre os número digitados
//

#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	int soma = 0, valor;
	char sn = 's';
	
	while(sn == 's'){
		printf("Digite um valor: \n");
		scanf("%d", &valor);
		
		soma = soma + valor;
		
		printf("Quer continuar? s/n\n");
		scanf(" %c", &sn);
	}
	
	printf("A soma entre os valores digitados é: %d\n", soma);
}

/*
while(sn == 'S'){

	*/