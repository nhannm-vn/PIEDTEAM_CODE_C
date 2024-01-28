#include <stdio.h>
#include <stdlib.h>
//Viết 1 chương trình nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và
//tổng 2 chữ số chia hết cho 2 thì kết thúc,
//còn không thì nhập lại đến chết ( 4p )
int checkPrime(int n);
int moduloTwo(int n);
int main()
{
    int n = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nNhap vao n: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10 || n < 10 || n > 99){
                printf("\nNhap lai di ne: ");
                printf("\n");
            }
        }while(ch != 10 || n < 10 || n > 99);

        if(checkPrime(n) == 1 && moduloTwo(n) == 1){
            return;
        }
    }
    return 0;
}
int moduloTwo(int n){
    int tmp = n;
    int rye = 0;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    if(sum % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
