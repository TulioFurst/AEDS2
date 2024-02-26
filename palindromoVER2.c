#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

int main()
{

/*
    int * string = malloc(sizeof(char) * 100);
    int size = strlen(string);
    string = realloc(string, size); */
    


    char palindromo[MAX];

    printf("\nDigite uma palavra: ");

    scanf(" %[^\n]", palindromo);

    int tamanhoPalavra = strlen(palindromo);


int i = 0, j = tamanhoPalavra -1;
bool ehPalindromo = true;

    while(i < j)
    {
        if(palindromo[i] != palindromo[j])
        {
            printf("\nNão é um palíndromo");
            ehPalindromo = false;
            i = j;
        }

        i++;
        j--;

    }

    if (ehPalindromo)
    {
        printf("\nÉ um palíndromo.");
    }


    return 0;
}


