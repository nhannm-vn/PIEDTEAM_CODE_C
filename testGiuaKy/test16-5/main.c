#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r  = 0;
    for(int i = 0; i < 10; i++)
        for(int k = i + 1; k <= 9; k++)
            r += (k * i)  + k;

    printf("%d", r);

    return 0;
}
