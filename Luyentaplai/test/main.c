#include <stdio.h>
#include <stdlib.h>
/*
test1: check prime bang return
test2:

*/
int main()
{
    //TEST 1:
    int number = 0;
    printf("\nInput number: ");
    scanf("%d", &number);

    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return 0;
            }
        }
        printf("%d is prime", number);
    }else{
        printf("%d is not prime", number);
    }



    return 0;
}
