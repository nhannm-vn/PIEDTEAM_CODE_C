#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s = 0;
    int h = 0;
    int m = 0;
    printf("\nInput s: ");
    scanf("%d", &s);

    h = s / 3600;

    m = (s % 3600) / 60;

    s = (s % 3600) % 60;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
