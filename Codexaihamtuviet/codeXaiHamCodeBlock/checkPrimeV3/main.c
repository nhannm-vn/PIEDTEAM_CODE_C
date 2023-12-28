#include <stdio.h>
#include <stdlib.h>
//check Prime V3

int checkPrimeV3(void);


int main()
{
    int tmp = checkPrimeV3();
    if(tmp == 1){
        printf("\nIs prime");
    }else{
        printf("\n Not is prime");
    }



    return 0;
}

int checkPrimeV3(void){
    int number  = 0;
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
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}
