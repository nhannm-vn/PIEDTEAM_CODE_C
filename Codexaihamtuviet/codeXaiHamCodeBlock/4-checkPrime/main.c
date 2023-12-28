#include <stdio.h>
#include <stdlib.h>
//check prime

void checkPrime(int n){
    int isPrime = 1;
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("\nLa so nguyen to do!");
        }else{
            printf("\nKhong la so nguyen to dau");
        }
    }else{
        printf("\nKhong la so nguyen to");
    }

}

int main()
{
    int  n =0;
    printf("\nInput n: ");
    scanf("%d", &n);
    checkPrime(n);

    return 0;
}
