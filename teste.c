//
//
// Introduction à La Programmation
/*4 L’ ́echiquier
R ́edigez un programme en langage C qui demande deux caract`eres ASCII `a l’utilisateur et un entier, puis affiche un  ́echiquier de la taille d ́esir ́ee.
Entrez un caract`ere
#
Entrez un autre caract`ere 0
Entrez un entier
4
#0#0 
0#0# 
#0#0 
0#0#
Vous n’avez pas `a valider l’entr ́ee de l’usager, il s’agit d’un bonus.
Indice : commencez par d ́ecrire le num ́ero de rang ́ee et le num ́ero de colonne de chaque case.*/
//
//
// test new commit
#include <stdlib.h> 
#include <stdio.h> 
int main()
	{
	char lettre[1];
	int nombre;
	int a = 0;
	int b; 
	int x;


	printf ("Digitez un charactère: "); 
	gets(lettre); 

	printf("Digitez une nombre: "); 
	scanf("%d", &nombre);
	
	printf("Digitez maintenant le nombre des lignes: "); 
	scanf("%d", &x);


	while(a <= 3){
		
		printf(" %c %d", lettre[b], nombre);
		a++;

	}
	a--;
	printf("\n\n");

	while(a <= x){

 	printf(" %c %d", lettre[b], nombre);
	a++;
	printf ("\n\n");

	}



	//	for(a=0;a<=3;a++) 
	//{
		//printf(" %c %d", lettre[a], nombre);
	//}
	system("pause");
	 

	return 0;
}
