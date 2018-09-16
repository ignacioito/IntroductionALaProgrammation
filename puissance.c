//
//
// Autheur: Ignacio Ito
// Activité #2
//
/* #1 LA PLUS GRAND PUISSANCE DE 10
Rédigez un programme en langage C qui trouve la plus grande puissance de
10 qui entre dans un nombre strictement positif.
 */
//
// Dessinez d'abord le diagramme de flot.


#include<stdlib.h>
#include<stdio.h>


int calculPuissance(int c, int p);

int main(int argc, char const *argv[])
{
	int n; 
	int e = 0; 
	

	printf("Saisissez avec un nombre:\n");
	scanf("%d", &n);

	//printf("%d\n", calculPuissance(10,e));
	
	

	while (n >= (calculPuissance(10,e)))
	{
		e++;
	} 
 	
 	e--;
	int r = (calculPuissance(10,e));
	
	printf("La plus grande puissance de 10 qui entre dans %d est 10^%d = %d.\n", n, e, r);
	
	
	return 0;

}


int calculPuissance (int b, int e){
    

	if (e == 0)
	{
		return 1;
	} else {
		return b * calculPuissance(b, e - 1);
	}

}
/*

int main(int argc, char const *argv[])
{
	int p, n, c = 0;


	printf("Quelle est le nombre?\n");
	scanf("%d", &n);


		p = 10 ^ c; 	
		printf("%d \n", p);

	//while (p < n) {

			//c++;
		//}
			//printf("la plus grande puissance de 10 qui entre dans %d est: %d", n, p);
			//return 0;
}

*/