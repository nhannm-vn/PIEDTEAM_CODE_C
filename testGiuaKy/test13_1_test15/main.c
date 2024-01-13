#include <stdio.h>
#include <stdlib.h>
//Nhập vào số s rồi quy đổi

void transTime(int s);

int main()
{
    int s = 0;
    printf("\nNhap so giay can doi: ");
    scanf("%d", &s);

    printf("\nQuy doi la: ");
    transTime(s);
    return 0;
}
void transTime(int s){
    int m = 0;
    int h = 0;

    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;

    printf("\n%02d:%02d:%02d", h, m, s);
}
