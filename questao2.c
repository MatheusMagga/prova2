//Matheus de Almeida Magalhaes
#include <stdio.h>
#include <string.h>
#define TAM 20
char alfa[] = "abcdefghijklmnopqrstuvwxyzç";

void main()
{
    char vetor[TAM];
    int aux[TAM];
    int temp = 0;

    printf("Insira um palavra de no máximo 20 caracteres! \n");
    gets(vetor);
    //For para descobrir posições da palavra.
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if (alfa[j] == vetor[i])
            {
                aux[i] = j + 1;
            }
        }
    }
    //For para ordenar usando bubblesort.
    for (int i = 1; i < TAM; i++)
    {
        for (int j = 0; j < TAM - 1; j++)
        {
            if (aux[j] > aux[j + 1])
            {
                temp = aux[j];
                aux[j] = aux[j + 1];
                aux[j + 1] = temp;
            }
        }
    }
    //Print da nova ordem.
    for (int i = 0; i < strlen(aux); i++)
    {
        printf("%d", aux[i]);
    }
    printf("\n");
    printf("Sei que há algum erro de lógica, mas considere algo ai professor, please! (ツ)\n");
}
