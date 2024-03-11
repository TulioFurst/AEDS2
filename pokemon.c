#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 300


int main ()
{

int qtd;

printf("\nDigite a quantidade de pomekons capturados: ");
scanf("%i", &qtd);

char **pomekons = (char **) malloc(qtd*sizeof(char*));

for (int i = 0; i < qtd; i++)
{
    printf("\nPomekon: ");
    pomekons[i] = (char *)malloc(50 * sizeof(char));

    scanf("%s", pomekons[i]);
}

int capturados = 0;
int res = 0;

for (int j = 0; j < qtd; j++)
{
    for (int i = qtd; i > 0; i--)
    {
        if (pomekons[i] != pomekons[j])
        capturados++;

    }
}

res = 151 - capturados;

printf("\nFaltam %i pomekons.", res);




free (pomekons);
    return 0;
}