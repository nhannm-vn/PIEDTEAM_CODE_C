#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào số giây sau đó quy đổi ra theo đúng format

    int s;
    int gio;
    int phut;
    int giay;

    printf("\nInput vao so giay can quy doi: ");
    scanf("%d", &s);

    gio = s / 3600;

    phut = (s % 3600) / 60;

    giay = (s % 3600) % 60;

    printf("\nSau khi quy doi la: \n");
    printf("%02d:%02d:%02d", gio, phut, giay);



    return 0;
}
