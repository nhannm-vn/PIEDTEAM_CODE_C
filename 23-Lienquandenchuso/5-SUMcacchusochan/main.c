#include <stdio.h>
#include <stdlib.h>

//Nhập vào chữ số nguyên dương
//Tính tổng các chữ số chẵn của nó:
//Ví dụ 247: 2 + 4 = 6

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
    int sum = 0;
    int rye;
    do{
        rye = tmp % 10;
        if(rye % 2 == 0){
            sum += rye;
        }

        tmp = tmp / 10;
    }
    while(tmp != 0);

    printf("\nTong cac so chan la: %d", sum);

    return 0;
}
