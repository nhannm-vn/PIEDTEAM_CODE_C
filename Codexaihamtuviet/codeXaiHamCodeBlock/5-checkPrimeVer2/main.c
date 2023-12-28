#include <stdio.h>
#include <stdlib.h>
//Check prime V2

int checkPrime(int n){
    int isPrime = 1;
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            return 1;
        }else{
            return 2;
        }
    }else{
        return 2;
    }
}

int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);
    if(checkPrime(n) == 1){
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong la so nguyen to");
    }


    return 0;
}
