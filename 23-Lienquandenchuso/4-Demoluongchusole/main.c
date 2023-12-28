#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên dương. Đếm số lượng chữ số lẻ của nó
//Ví dụ: 568 là 1 số

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);

    int tmp = n;//Để chạy điều kiện tới 0
    int sum = 0;//Để đếm số lượng chữ số lẻ
    int rye = 0;//Để chứa các chữ số
    do{
        rye = tmp % 10;
        if(rye % 2 != 0){
            sum++;
        }
        tmp = tmp / 10;
    }
    while(tmp != 0);

    printf("\nSo luong chu so le cua so %d la: %d", n, sum);

    return 0;
}
