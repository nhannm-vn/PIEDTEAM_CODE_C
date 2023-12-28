#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);
    int isPrime = 1;
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("\nLa so nguyen to do");
        }else{
            printf("\nKhong la so nguyen to dau nhen");
        }
    }else{
        printf("\nKhong la so nguyen to dau nhen");
    }



    return 0;
}
