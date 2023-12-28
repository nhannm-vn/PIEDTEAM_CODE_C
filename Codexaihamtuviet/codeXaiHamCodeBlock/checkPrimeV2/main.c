#include <stdio.h>
#include <stdlib.h>
//check Prime V2

void checkPrimeV2(int number);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
        }
    }while(ch != 10);

    checkPrimeV2(n);



    return 0;
}

void checkPrimeV2(int number){
    int isPrime =1;
    if(number >= 2){
        for(int  i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("\nis prime");
        }else{
            printf("\nis not prime");
        }
    }else{
        printf("\nis not prime");
    }
}
