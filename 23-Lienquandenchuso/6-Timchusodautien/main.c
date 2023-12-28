#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên dương n
//Tìm chữ số đầu tiên của nó

//Khi nó tới chữ số cuối của % 10 gán nó vào 1 biến rồi in ra

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);
    //In ra chữ số đầu tiên
    int tmp = n;
    int rye;
    do{
        rye = tmp % 10;
        if(tmp < 10){
            printf("\nChu so dau tien cua so %d la: %d", n, rye);
        }
        tmp /= 10;
    }
    while(tmp != 0);


    return 0;
}
