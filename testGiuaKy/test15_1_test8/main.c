#include <stdio.h>
#include <stdlib.h>
/*
 Viết hàm nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và tổng 2 chữ số chia
 hết cho 2 Có đầu ra là true hoặc false, nếu true thì in ra đúng rồi, false thì sai rồi
*/
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
            printf("\n");
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
    int isPrime = 1;
    int flag = 0;
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
    int sum = 0;
    int tmp = n;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    if(sum % 2 == 0 && flag == 1){
        return 1;
    }else{
        return 0 ;
    }
}
