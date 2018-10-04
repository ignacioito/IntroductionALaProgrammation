#include <stdio.h>
#include <string.h>

int main( void )
{

    char vet[4], resultado[30];
    char m[][3] = {"M","MM","MMM"};
    char c[][4] = {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };
    char d[][4] = {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };
    char u[][4] = {"I","II","III","IV","V","VI","VII","VIII","IX" };

    memset( vet, '\0', sizeof(vet) );
    memset( resultado, '\0', sizeof(resultado) );

    printf("Digite um numero: ");
    scanf("%s", vet);

    // Milhar
    switch( vet[0] )
    {
            case '1':
                strcat(resultado, m[0]);
                break;

            case '2':
                strcat(resultado, m[1]);
                break;

            case '3':
                strcat(resultado, m[2]);

    }

    // Centena
    switch( vet[1] )
    {
            case '1':
                strcat(resultado, c[0]);
                break;

            case '2':
                strcat(resultado, c[1]);
                break;

            case '3':
                strcat(resultado, c[2]);
                break;

            case '4':
                strcat(resultado, c[3]);
                break;

            case '5':
                strcat(resultado, c[4]);
                break;

            case '6':
                strcat(resultado, c[5]);
                break;

            case '7':
                strcat(resultado, c[6]);
                break;

            case '8':
                strcat(resultado, c[7]);
                break;

            case '9':
                strcat(resultado, c[8]);

    }

    // Dezena
    switch( vet[2] )
    {
            case '1':
                strcat(resultado, d[0]);
                break;

            case '2':
                strcat(resultado, d[1]);
                break;

            case '3':
                strcat(resultado, d[2]);
                break;

            case '4':
                strcat(resultado, d[3]);
                break;

            case '5':
                strcat(resultado, d[4]);
                break;

            case '6':
                strcat(resultado, d[5]);
                break;

            case '7':
                strcat(resultado, d[6]);
                break;

            case '8':
                strcat(resultado, d[7]);
                break;

            case '9':
                strcat(resultado, d[8]);

    }

    // Unidade
    switch( vet[3] )
    {
            case '1':
                strcat(resultado, u[0]);
                break;

            case '2':
                strcat(resultado, u[1]);
                break;

            case '3':
                strcat(resultado, u[2]);
                break;

            case '4':
                strcat(resultado, u[3]);
                break;

            case '5':
                strcat(resultado, u[4]);
                break;

            case '6':
                strcat(resultado, u[5]);
                break;

            case '7':
                strcat(resultado, u[6]);
                break;

            case '8':
                strcat(resultado, u[7]);
                break;

            case '9':
                strcat(resultado, u[8]);

    }

    printf ("%s\n", resultado);

    getch();

    return 0;

}