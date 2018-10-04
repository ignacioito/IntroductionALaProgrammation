//
//
//Aula do Curso em Video Professor Gustavo Guanabara - Rotinas aula 1
//
// detector de pesado

#include<stdio.h>
#include<stdlib.h>

void detector(void);


int main(int argc, char const *argv[])
{
	char nom, leger;
	int c, kg, derniere;

		
	printf("- - - - DETECTOR DE PESADO - - - -\n");

	for(c = 1; c <= 3; c++){
	printf("Saisissez votre nom: \n");
	scanf(" %s", &nom);
	
	printf("Quel est votre poids?\n");
	scanf(" %d", &kg);
	if(kg > derniere){

		derniere = kg;
		leger = nom;

	printf("kilos %d\n", kg);
	}
	
}
	detector(leger, kg);
}


void detector(){
	static int kg;
	static char leger;
	printf(" - - - - - - - - - - - - - - - - -\n");
	printf("Le majeur poid jusqu'à maintenant c'est %c com: %d Kilos.\n", leger, kg);
	printf("- - - - - - - - - - - - - - - - - -\n");
}

