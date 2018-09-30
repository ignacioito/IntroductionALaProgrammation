//
//
// Auteur Ignacio Ito
//
// Combien des valeurs sont entre 0 et 10
// Adicional Exibir a soma entre os números ímpares digitados
//
//

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int n, sn = 0, cont = 0, imp = 0, somimp;

	printf("- - - - Conteur des nombres entre 0 et 10 - - - -\n");

	while(sn == 0){
		printf("Tapez le nombre: \n");
		scanf(" %d", &n);
		if ((n >= 0) && (n <= 10)){	
			if (n % 2 == 1){
			imp++;
			somimp = somimp + n;
		}
			cont++;
		}
		printf("Voulez vous continuer? s: 0/n: 1\n");
		scanf("%d", &sn);
	}

	printf("La quantité des nombres entre 0 et 10 sont: %d, la quantité des nombres impairs c'est: %d et la some des nombres impars c'est: %d\n", cont, imp, somimp);
}