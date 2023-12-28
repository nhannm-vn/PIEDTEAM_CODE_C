#include <stdio.h>
#include <stdlib.h>

//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    //Đầu tiên phải đặt baxy ép người dùng nhập n >= 1:

    int n;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
    }while(n < 1);//Điều kiện ép buộc n >= 1

    //Tính tổng của:
    //1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)

    int sum = 0;
    float tong = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        tong += (float)1/sum;
    }

    printf("\nTong cua day la: %.2f", tong);


    return 0;
}
