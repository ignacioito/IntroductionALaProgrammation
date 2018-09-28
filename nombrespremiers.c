//
//Auteur Ignacio Ito
//
// Afficher les nombres premiers (números primos)

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	
	int sn, n, calc, i;
	
	while(sn == 0){
		
		printf("Tapez un nombre: \n");
		scanf(" %d", &n);
		
		/*for(i = n; i>=1; i--){
			calc = (n / i);
		*/
		i = n;
			while(i >= 1){
				calc = (n / i);
				printf("%d\n", calc);
				i--;
			
			}
		printf("Voulez vous continuer? 0: oui/1: non\n"); 
		scanf("%d", &sn);
			}
		printf("printf calc: %d\n", calc);
		
		}

		
	



/*;*/

/*

		
		cont = ;
*/