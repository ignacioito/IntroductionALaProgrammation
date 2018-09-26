//
//
//Auteur Ignacio Ito
//Revision Repetition 3
//
// Calcule de numero factoriel
// exemple 5:
// 5 * 4 * 3 * 2 * 1 = 120


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int n, c = 1, i;
	printf("-----Calcul de Numero Factoriel-----\n");
	printf("Tapez le numero:\n");
	scanf("%d", &n);
	i = n;
	while(i >= 1){
		c = i * c;
		i--;

	}
	printf("%d\n", c);
/*
	for(i = n; i >= 1; i--){
		c = i * n;
		printf("%d\n", c);
	}
*/
		
}
//jdijsidjsidjsi