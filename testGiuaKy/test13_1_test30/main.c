#include <stdio.h>
#include <stdlib.h>
//•	24.Viết hàm nhận vào số có 2 chữ số
//nếu số đó là số nguyên tố và
//tổng 2 chữ số chia hết cho 2 Có đầu ra là true hoặc false
//nếu true thì in ra đúng rồi, false thì sai rồi ( 4p )

int checkNumber(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 10 || n > 99){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || n < 10 || n > 99);
    if(checkNumber(n)){
        printf("\nDung roi");
    }else{
        printf("\nSai roi");
    }
    return 0;
}
int checkNumber(int n){
    int flag = 0;
    int isPrime = 1;
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            flag = 1;
        }
    }
    int tmp = n;
    int rye = 0;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    if(sum % 2 == 0 && flag == 1){
        return 1;
    }else{
        return 0;
    }
}