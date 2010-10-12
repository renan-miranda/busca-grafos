#include <stdio.h>
#include "lib_dfs.h"

int main(void)
{
    int n_vert, v_pai, v_filho;
    int **m = NULL;
    int i, j;

    scanf("%d", &n_vert);

    m = cria_matriz(n_vert);

    while((scanf("%d %d", &v_pai, &v_filho) == 2))
    {
        insere_aresta(m, v_pai-1, v_filho-1);
        insere_aresta(m, v_filho-1, v_pai-1);
    }

//    busca_profundidade(m, 1);

//    destroi_matriz(m, n_vert);

    return 0;
}
