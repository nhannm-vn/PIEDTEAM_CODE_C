#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào số nguyên n, biến đổi thành một số mới
//được ghép từ chữ số đầu tiên và cuối cùng
//123 13
//1   1
//15  15
void changeNumeber(int *n);
int firstNumber(int n);
int lastNumber(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);
    changeNumeber(&n);
    printf("\nSo n sau bien doi: %d", n);
    return 0;
}
int lastNumber(int n){
    return n % 10;
}
int firstNumber(int n){
    int tmp = n;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            return rye;
        }
    }
}
void changeNumeber(int *n){
    int tmp = *n;
    int m = 0;
    if(*n > 9){
        m = firstNumber(*n) * 10 + lastNumber(*n);
    }else{
        m = firstNumber(*n);
    }
    return *n = m;
}
