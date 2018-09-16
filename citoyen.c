#include <stdio.h>
#include <stdlib.h>
int main()

{

	char pere = 'n';
	char age = 'n';
	char enfant = 'n';


	printf("\nRespondez avec O (pour OUI) ou N (pour Non).\n\n" );

	printf("Votre père est citoyen romain?\n");
	scanf(" %c", &pere);
	printf("Vous avez au moin 30 ans?\n");
	scanf(" %c", &age);
	printf("Vous avez au moin un enfant legit?\n");
	scanf(" %c", &enfant);
	

	if (((pere == 'o') || (pere == 'O')) && (((age == 'o') || (age == 'O')) && ((enfant == 'o') || (enfant == 'O'))))
	{
		printf("\nCITOYEN\n\n");
	}
	else
	{
		printf("\nPAS CITOYEN\n\n");
	}
}
