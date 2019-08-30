#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;

}

int main()
{
    int a = 4;
    int b = 25;

    troca(&a, &b);

    printf("a: %d\nb: %d", a, b);
    return 0;
}
