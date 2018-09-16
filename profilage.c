gcc//
//
// Autheur: Ignacio Ito
// Activité #1
/* #1 Profilage
Demandez son anée de naissance à l'utilisateur. Rédigez un programme
en langage C qui, à partir de cette information, offre une phrase descriptive.
Vous devez avoir un minimum de quatre possibilités de sortie. Toute entrée
de l'usager doit engendrer une réaction du programme. */

// Dessinez d'abord le diagramme de flot.


#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
	
	int age, a = 0;


	printf("Quelle est votre annee de naissance?\n");
	scanf("%d", &a);


	age = 2018 - a;

	if ((age >= 18) && (age <= 100) && (!(age > 100)))
	{
		printf("Vous êtes un adulte. \n");
	}
	if (age < 5 && age > 0)
	{
		printf("Vous êtes un bébé génial qui sait lire et écrire.\n");
	}
	if (a < 1928)
		{
			printf("Mais vous êtes un menteur.\n");
		}
		if (a > 2018)
		{
			printf("Vous êtes un turiste du futur.\n");
	}
	//return 0;
}