
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
 for (int i = 0; i < argc; i++){
 printf("argv[%d] = %s\n", i, *(argv++));
}

	// Si argv[1] est "TEST"
	// Tests unitaires
	// 
	testDate();	
	printf("\n");

	//Sinon
	//Exécution normale
	printf("Entrez une date (jj/mm/aaaa)\n");

}