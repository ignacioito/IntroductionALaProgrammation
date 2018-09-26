//
//Auteur Ignacio Ito
//
// Revision

#include<stdio.h>
#include<stdlib.h>

//Tabuada
/*
int main(int argc, char const *argv[])
{
	int n, i = 1, c;
	printf("_______TabuadA_______\n");
	printf("Disez le nombre: \n");
	scanf(" %d", &n);
	while(i <= 10){
		int c = (n * i);
		printf("%d * %d = %d\n", n, i, c);
		i++;
	}
	return 0;
}
*/

int main(int argc, char const *argv[])
{
	int n, i = 0, contNeg = 0;

	printf("_______Compteur de Negatifs_______\n");

	while(i <= 5){
	printf("Tapez le numero: \n");
	scanf("%d", &n);
	if(n < 0){
	contNeg = contNeg + 1;
		}
	i++;
	}

	printf("Le numero de negatifs c'est: %d\n", contNeg);
	


	
}


/*
//Auteur Ignacio Ito
//
// Revision

#include<stdio.h>
#include<stdlib.h>


/*
int main(int argc, char const *argv[])
{
	int n, i = 1, c;
	printf("_______TabuadA_______\n");
	printf("Disez le nombre: \n");
	scanf(" %d", &n);
	while(i <= 10){
		int c = (n * i);
		printf("%d * %d = %d\n", n, i, c);
		i++;
	}
	return 0;
}



// Programm pour prendre 5 nombres et afficher le nombre de negatifs:

int main(int argc, char const *argv[])
{
	int n, i = 1, contNeg;

	while(i <= 5){
		printf("Donnez un nombre: \n");
		scanf("%d", &n);
		if(n < 0){
		contNeg = contNeg + 1;
		}
		i++; 	
	}
	
	printf("Le nombre de nombre negatifs c'est: %d\n", contNeg);
	
}

*/