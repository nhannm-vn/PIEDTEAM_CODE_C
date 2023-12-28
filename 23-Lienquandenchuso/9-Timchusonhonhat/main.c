#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên duong n
//Tìm và in ra chữ số nhỏ nhất

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);

    int tmp = n;
    int rye;
    int min = 9;//Gán min = 9 để tìm được số nhỏ hơn

    //Trường hợp nhập toàn số 0:
    if(n == 0){
        printf("\nChu so nho nhat la: %d", n);
        return 0;
    }

    do{
        rye = tmp % 10;
        if(rye <= min){
            min = rye;
        }

        tmp /= 10;
    }
    while(tmp != 0);

    printf("\nChu so nho nhat la: %d", min);

    return 0;
}
