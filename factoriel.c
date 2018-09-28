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
<<<<<<< HEAD
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


=======
<<<<<<< HEAD
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
=======
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


>>>>>>> 775242e3dd7f06e54b730a46c437ba1ba7532eb2
>>>>>>> 654298e99edeb8c1ad8a2cfbce87640cdf970ae8
