#include<stdio.h>
#include<stdlib.h>



typedef struct Jet Jet;
struct Jet
 {
  int des[TAILLE_JET]; 

 }; 


int rigole(Jet jet){
	ordonner(des[TAILLE_JET]);
	int somme1, somme2, somme3, somme4, somme5, somme6;
	somme1 = 0; somme2 = 0; somme3 = 0; somme4 = 0; somme5 = 0; somme6 = 0;

	for (int i = 0; i < 4; ++i)
	{
		if ((des[i]==1) && (des[4] == 6))
		{
			somme1++;
		}
		if ((des[i]==2) && (des[4] == 5))
		{
			somme2++;
		}
		if ((des[i]==3) && (des[4] == 4))
		{
			somme3++;
		}
		if ((des[i]==4) && (des[4] == 3))
		{
			somme4++;
		}
		if ((des[i]==5) && (des[4] == 2))
		{
			somme5++;
		}
		if ((des[i]==6) && (des[4] == 1))
		{
			somme6++;
		}

	}

	if (((somme1) || (somme2) || (somme3) || (somme4) || (somme5) || (somme6)) == 4)
	{
		return 50;
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	printf("Test Programmation d'une fonction\n");



	return 0;
}