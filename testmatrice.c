#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	const int bimestreAnuais = 4;
	const int numeroDeAlunos = 4;
	float media = 0;


	float notesEleves[numeroDeAlunos][bimestreAnuais] = {0};
	float mediaEleves[numeroDeAlunos] = {0};

	printf("Tapez les quattre notes de l'éleve 1: \n");


	for (int i = 0; i < numeroDeAlunos; ++i)
	{
		for (int j = 0; j < bimestreAnuais; ++j)
		{
			scanf(" %f", &notesEleves[i][j]);
			media += notesEleves[i][j];
		}
		mediaEleves[i] = media / bimestreAnuais;
		media = 0;
		printf("Insira as 4 notas do aluno %i\n", i + 2);
	}
	for (int i = 0; i < numeroDeAlunos; ++i)
	{
		printf("A media do aluno %i  é %.2f\n", i + 1, mediaEleves[i]);
	}
}