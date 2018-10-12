
#include<stdio.h>
#include<stdlib.h>
//Indentifier touts les variables et donnez leur type
//Lesquelles sont des pointeurs? Que fait le code? Remarquez-vous quelque
//chose dans les arguments à scanf?



int pgcd(int a, int b)
{
	return ((b == 0) ? a : pgcd(b, a % b));

/*	if (b == 0)
		return a;
	else
		return pgcd(b, a % b)	*/
}

void reduire(int* a, int* b)
{
int p = pgcd(*a, *b);
*a /= p;
*b /= p;
}


int main()
{
int a, b;
scanf("%d %d", &a, &b);
 reduire(&a, &b);
printf("%d/%d \n", a, b);
}


