//
//
//Auteur Ignacio Ito
//
/*
Exercice
● Déclarez une variable i de type int. Mettez 10
dedans.
● Déclarez un pointeur p vers un entier. Mettez
l’adresse de i dedans.
● Imprimez la valeur des expressions suivantes et
expliquez dans vos mot ce qu’elles signifient :
p &p *p
i &i *i
*/



#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 10;
	int* p = &i;


	printf("%p\n", &i);
	printf("%p", &p);
	printf("%d\n", *p);


	//printf("%p\n", *i);

	
	return 0;
}