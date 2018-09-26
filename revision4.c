//
//Auteur Ignacio Ito 26/09
//
//Entrez autant de nombres que vous voulez. Le programme les ajoutera tous ensemble.
//

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int sn, n, som;
	
	while(sn == 0){
		
		printf("Tapez un nombre: \n");
		scanf(" %d", &n);
		som = n + som;
		printf("Voulez vous continuer? O/N\n"); 
		scanf("%d", &sn);
	}
	printf("La somme c,est %d\n", som);

}



/*
{
    char name[30], ch;
    int i = 0;
    printf("Enter name: ");
    while(ch != '\n')    // terminates if user hit enter
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';       // inserting null character at end
    printf("Name: %s", name);
    return 0;
}
*/