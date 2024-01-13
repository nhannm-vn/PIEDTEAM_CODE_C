#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào một số nguyên, trả ra 1 nếu là số nguyên tố và 0 nếu không phải

int checkPrime(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di ban");
            printf("\n");
        }
    }while(ch != 10);
    int tmp = checkPrime(n);
    printf("\n%d", tmp);

    return 0;
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
