//
//
//Aula do Curso em Video Professor Gustavo Guanabara - Rotinas aula 1
//
// detector de pesado

#include<stdio.h>
#include<stdlib.h>

void detector();

int main(int argc, char const *argv[])
{
	char nom, leger;
	int c, kg, derniere;
	
	printf("- - - - DETECTOR DE PESADO - - - -\n");

	for(c = 1; c <= 5; c++){
	printf("Saisissez votre nom: \n");
	scanf(" %s\n", &nom);
	printf("Quel est votre poids?\n");
	scanf(" %d", &kg);
	printf("KGS %d\n", kg);
	if(kg > derniere){

		printf(" teste kilos: %d\n", kg);

		derniere = kg;
		leger = nom;
	}
	
}
	detector(derniere);
}


void detector(){
	int ultimo;
	printf(" - - - - - - - - - - - - - - - - -\n");
	printf("Le majeur poid jusqu'à maintenant c'est: %d.\n", ultimo);
	printf("- - - - - - - - - - - - - - - - - -\n");
}

