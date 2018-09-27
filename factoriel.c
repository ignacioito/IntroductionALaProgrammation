//
//

//Auteur Ignacio Ito
//Exercice Calcul de nombre factoriell

//
//

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	int n = 0, calcul, i;
	char sn = 's';

	printf("----Programme de Calcul de Numéro Factoriel----\n");
	printf("Tapez un numéro pour savoir le factoriel\n");
	scanf(" %d", &n);
while(sn == 's'){
	while(n >= 1){
		printf("Tapez un numéro pour savoir le factoriel\n");
		scanf(" %d", &n);
		calcul = calcul * n;
		n--;
		printf("le factoriel de %d c'est %d.\n", n, calcul);
	}
	printf("Voulez vous continuer? (s/n)\n");
	scanf(" %c", &sn);
}
	
}


