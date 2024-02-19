#include <stdio.h>
#include <stdbool.h>

#define MAX 50

int main()
{

    char palindromo[MAX];

    printf("\nDigite uma palavra: ");

    scanf(" %[^\n]", palindromo);

    int tamanhoPalavra = 0;

    while(palindromo[tamanhoPalavra] != '\0' && tamanhoPalavra < MAX)
    {
        tamanhoPalavra++;
    }

int i = 0, j = tamanhoPalavra -1;
bool ehPalindromo = true;

    while(i < j)
    {
        if(palindromo[i] != palindromo[j])
        {
            printf("\nNão é um palíndromo");
            ehPalindromo = false;
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