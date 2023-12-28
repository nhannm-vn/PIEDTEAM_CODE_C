#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char ch;

    do{
        printf("\nHay nhap vao mot so nguyen di: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nDa nhap sai. Hay nhap lai!");
            printf("\n");
        }else{
            if(number >= 2){
                int isPrime = 1;
                for(int i = 2; i <= number - 1; i++){
                    if(number % i == 0){
                        isPrime = 0;
                        break;
                    }
                }
                if(isPrime){
                    printf("\nLa so nguyen to do!");
                }else{
                    printf("\nKhong la so nguyen to");
                }
            }else{
                printf("\nKhong la so nguyen to");
            }
            printf("\n");
        }
    }while(ch != 10 || number != 0);


    return 0;
}
