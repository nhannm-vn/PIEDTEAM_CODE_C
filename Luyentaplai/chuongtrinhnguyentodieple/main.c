#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nInput number: ");
            scanf("%d", &number);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nSai roi. Moi nhap lai");
                printf("\n");
            }
        }while(ch != 10);
        if(number == 0){
            return 0;
        }

        int isPrime = 1;
        if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("\nLa so nguyen to do");
            }else{
                printf("\nKhong la so nguyen to dau");
            }
        }else{
            printf("\nKhong la so nguyen to dau");
        }
        printf("\n");
    }


    return 0;
}
