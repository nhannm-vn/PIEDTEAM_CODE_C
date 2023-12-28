#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên duong n
//Tính tổng các chữ số của nó

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);

    //Tính tich các chữ số
    long long tich = 1;
    int tmp = n;//Khai báo tmp để giúp việc đẩy nó về 0

    while(tmp != 0){
        tich *= tmp % 10;//Tích = tích * lần lượt chữ số
        tmp = tmp / 10;//255 2%10 không được nên dư 2
    }

    printf("\nTich cac chu so la: %ld", tich);


    return 0;
}
