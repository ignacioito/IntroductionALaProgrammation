#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 10;
	double y = 20.50;
	char z = 'a';

	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;

	printf("Endereço de x = %i e o Valor x = %i \n", pX, *pX);

	getchar();


	return 0;
}