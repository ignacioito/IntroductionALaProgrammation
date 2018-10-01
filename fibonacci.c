//
//Auteur Ignacio
//
// Sequence de Fibonnacci


#include<stdio.h> // é responsável pelas funções de entrada e saída
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	int a = 0, b = 1, i, aux;


	for(i = 0; i < 16; i++){
		printf("%d ", aux);
		aux =  a + b;

		a = b;
		b = aux;



	}
	return 0;
}