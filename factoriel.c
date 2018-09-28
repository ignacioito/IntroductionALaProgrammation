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
	int n = 0, calcul = 1, i;
	char sn = 's';

	printf("----Programme de Calcul de Numéro Factoriel----\n");

	printf("Tapez un numéro pour savoir le factoriel\n");
	scanf(" %d", &n);
	
	i = n;
while(sn == 's'){
	printf("Voulez vous continuer? s/n\n");
	scanf(" %c", &sn);
		while(i>=1){
		printf("Tapez un numéro pour savoir le factoriel\n");
		scanf(" %d", &n);
		
		calcul = calcul * i;
	
	
		i--;
		
		}
}
		printf("le factoriel de %d c'est %d.\n", n, calcul);

}


