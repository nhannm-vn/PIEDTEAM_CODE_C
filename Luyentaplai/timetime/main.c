#include <stdio.h>
#include <stdlib.h>


int main()
{
    int s;
    int m;
    int h;

    printf("\nHay nhap vao so giay di: ");
    scanf("%d", &s);

    h = s / 3600;

    m = (s % 3600) / 60;

    s = (s % 3600) % 60;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
