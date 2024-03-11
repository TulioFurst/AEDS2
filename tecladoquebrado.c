#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
R - apenas leitura de arquivo
W - abre o arquivo para escrita
A - abre e escreve mas não apaga o conteúdo anterior
*/


int main ()
{

FILE* arq = fopen("arquivo.txt", "r");

int beiju;

while ((beiju = fgetc(arq)) != EOF)
{
    if (beiju == '[' || beiju == ']')
    {
        continue;
    }

    putchar(beiju);
}

fclose(arq);


    return 0;
}