

int pgcd(int a, int b)
{* code qui retourne le pgcd *}
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