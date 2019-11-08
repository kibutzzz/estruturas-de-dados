#include <stdio.h>
#include <stdlib.h>

void calcula(float x , float *y) {
    float res = 2 * x;
    *y = res;
}

int main()
{
    float x = 2;
    float *y = NULL;

    calcula(x, y);
    printf("%f", *y);

    return 0;
}
