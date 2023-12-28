#include <stdio.h>
#include <stdlib.h>

//2. 17-timeCalculation
//nhập vào 1 số nguyên đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//hint: %02d | sử dụng / %

int main()
{

    int s;
    printf("\nInput so giay la: ");
    scanf("%d", &s);

    int gio;
    gio = s / 3600;
    printf("\nGio: %d", gio);

    int phut;
    phut = (s % 3600) / 60 ;
    printf("\nPhut: %d", phut);

    int giay;
    giay = (s % 3600) % 60;
    printf("\nGiay: %d", giay);

    printf("\nQuy doi: \n");
    printf("%02d:%02d:%02d", gio, phut, giay);




    return 0;
}
