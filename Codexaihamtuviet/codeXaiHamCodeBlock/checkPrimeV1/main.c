#include <stdio.h>
#include <stdlib.h>
//Check Prime V1

void checkPrimeV1(void);

int main()
{
    checkPrimeV1();


    return 0;
}

void checkPrimeV1(void){
    int number = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
        }
    }while(ch != 10);

    int isPrime = 1;
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("\nIs prime");
        }else{
            printf("\nIs not prime");
        }
    }else{
        printf("\nIs not prime");
    }


}
