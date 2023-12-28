#include <stdio.h>
#include <stdlib.h>

//Hãy nhập vào một số (n>=0) và tính tổng các chữ số của nó:
//Gợi ý xài %
//MUỐN LỌC RA CHỮ SỐ HOẶC NHỮNG SỐ LỒNG VÀO NHAU THÌ XÀI %

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);
    //1457 % 10 = 7 lọc ra được số 7

    //Sum của các chữ số:

    int sum = 0;
    int themang = n;

    do{
        sum += themang % 10;
        themang = themang / 10;
    }
    while(themang != 0);

    printf("\nTong cac chu so cua so %d la: %d", n, sum);

    return 0;
}
