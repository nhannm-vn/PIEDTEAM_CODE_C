#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nNhap so nguyen to di: ");
            scanf("%d", &number);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
            printf("\nMoi nhap lai di!");
            }
        }while(ch != 10);

        if(number == 0){
            return 0;
        }
        if(number >= 2){
            int isPrime = 1;
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
