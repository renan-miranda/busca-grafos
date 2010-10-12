#include <stdio.h>
#include <stdlib.h>
#include "lib_dfs.h"

static int **aloca_linha(int lim)
{
    int **vetor = NULL;
    vetor = (int**) realloc(vetor, lim * sizeof(int*));
    return vetor;
}

static int * aloca_coluna(int tam)
{
    int *vetor = NULL, i;
    vetor = (int*) realloc(vetor, tam * sizeof(int));
    for(i = 0; i < tam; i++)
    {
        vetor[i] = 0;
    }
    return vetor;
}

int ** cria_matriz(int tam)
{
    int **matriz, i;

    matriz = aloca_linha(tam);
    for(i=0; i < tam; i++)
    {
        matriz[i] = aloca_coluna(tam);
    }

    return matriz;
}

void insere_aresta(int **m, int i, int j)
{
    m[i][j] = EXISTE;
}
