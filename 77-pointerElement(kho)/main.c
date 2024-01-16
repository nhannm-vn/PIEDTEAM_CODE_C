#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào số nguyên n, biến đổi thành một số mới
//được ghép từ chữ số đầu tiên và cuối cùng
//123 13
//1   1
//15  15
void newNumber(int *n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);
    newNumber(&n);
    printf("n = %d", n);
    return 0;
}
void newNumber(int *n){
    int firstNumber = 0;
    int lastNumber = 0;
    int tmp = *n;
    if(*n > 10){
        lastNumber = tmp % 10;
    }
    int rye = 0;
    while(tmp != 0){
        rye =  tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            firstNumber = rye;
        }
    }
    if(*n > 9){
        *n = firstNumber * 10 + lastNumber;
    }else{
        *n = firstNumber;
    }
}
