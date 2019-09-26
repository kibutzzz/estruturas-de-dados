#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v = NULL;
    int n;
    printf("Tamanho do vetor:\n");
    scanf( "%d", &n);
    v = malloc( n * sizeof (int)); // Aloca um vetor de n inteiros.
    if (v == NULL)
    {
        exit(1); // N�o foi poss�vel alocar mem�ria
    }
    else
    {
        for(int i = 0; i < n; i ++ ) {
            scanf("%d",  &v[i]);
            fflush(stdin);
        }

        for(int i = 0; i < n; i ++ ) {
            printf("%d",  v[i]);
        }
        // Utiliza mem�ria alocada
        free(v); // Depois libera a mem�ria.
        v = NULL; // Boa pr�tica
    }
}
