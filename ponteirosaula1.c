//
//


#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int Valor;

	int PontValor;

	Valor = 10;

	PontValor = &Valor;

	printf("\nPosition da variable Valor= %x\n\n\n", PontValor);


	return 0;
}