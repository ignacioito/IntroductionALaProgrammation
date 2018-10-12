
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
void inverser (int* a, int* b){
	int temp = *b;
	*b = *a;
	*a = temp;

}
void ordonner(int* a, int* b, int* c)
{

	if(*a > *b)
	{
		inverser(a, b);
	}
	if (*a > *c)
	{
		inverser(a, c);
	}
	if(*b > *c)
	{
		inverser(b, c);
	}

}

	//printf("%d %d\n", );
	//}
	// abc
	// acb
	// bac
	// bca
	// cab
	// cba


int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
ordonner(&a, &b, &c);
printf("%d - %d - %d\n", a, b, c);
}


