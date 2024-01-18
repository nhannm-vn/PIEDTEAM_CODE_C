#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào một số xài con trỏ để in ra số lấy đầu cuối
*/
void getNumber(int *n);
int main()
{
    int n = 0;
    printf("\nNhap vao n: ");
    scanf("%d", &n);
    getNumber(&n);
    printf("\nn: %d", n);
    return 0;
}
void getNumber(int *n){
    int lastNumber = 0;
    int firstNumber = 0;
    int tmp = *n;
    int rye = 0;
    lastNumber = tmp % 10;
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            firstNumber = rye;
        }
    }
    if(*n > 9){
        *n = firstNumber * 10 + lastNumber;
    }else{
        *n = lastNumber;
    }
}
