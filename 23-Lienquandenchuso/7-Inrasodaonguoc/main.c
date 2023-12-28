#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên dương
//In ra số đảo ngược ví dụ: 256 --> 652
//13456  13465    13645  16345 61345

//Thật ra là in ra chữ số từ cuối lên đầu @@

int main()
{
    int n;
    //Nhập vào một số nguyên dương:
    do{
        printf("\nNhap vao so nguyen duong n: ");
        scanf("%d", &n);
    }
    while(n < 0);
    //Tạo vòng lặp để tìm ra các chữ số
    int tmp = n;
    int rye;

    do{
        rye = tmp % 10;
        printf("%d", rye);
        tmp /= 10;
    }
    while(tmp != 0);

    //C2:
    /*
    do{
        printf("%d", tmp % 10);
    }
    while(tmp /= 10);


    */

    return 0;
}
