#include <stdio.h>
#include <stdlib.h>
void timeCaculator(int s);
int main()
{
    int s = 0;
    printf("\nNhap vao so s: ");
    scanf("%d", &s);
    timeCaculator(s);

    return 0;
}
void timeCaculator(int s){
    int m = 0;
    int h = 0;
    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;
    printf("%02d:%02d:%02d", h, m, s);
}
