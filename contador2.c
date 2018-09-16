//
//
//Author Ignacio Ito
//Contador de 1 a 5
//
//
#include<stdio.h>
#include<stdlib.h>

/*int main(int argc, char const *argv[])
{
	int a = 0;
	while(a <= 5){
		printf("%d", a);
		a++;
	}
	return 0;
}

*/
// omitindo o 0
int main(int argc, char const *argv[])
{
	int a, p = 10;
	/* 
	while(a <= 5){
		printf("%d\n", a);
		a++;
	}
	*/
	
	
	/*
	//pulando de 10 em 10 até 100

	while(a <= 100){
		printf("%d\n", a);
		a = a + 10;
	}
	*/

	// contador de 10 a 1
	for (a = 10; a >= 0; a--){
		printf("%d\n", a);
	}

}
