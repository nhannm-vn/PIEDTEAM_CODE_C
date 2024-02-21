#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("\nNhap vao n: ");
    scanf("%d", &n);
/*
    int isPrime = 1;
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }else{
        isPrime = 0;
    }

    if(isPrime == 1){
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong phai");
    }
*/
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                printf("\nKhong la so nguyen to");
                return 0;
            }
        }
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong la so nguyen to");
    }

    return 0;
}
