#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên. Kiểm tra rồi in ra. Kết thúc khi nhập 0
//Kiểm tra liên tục như vậy
int main()
{
    int number = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again!");
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
                    printf("\nLa so nguyen to do!!!");
                }else{
                    printf("\nKhong phai so nguyen to dau!");
                }
            }else{
                printf("\nKhong la so nguyen to dau!");
            }
        }
        printf("\n");

    }while(ch != 10 || number != 0);


    return 0;
}
