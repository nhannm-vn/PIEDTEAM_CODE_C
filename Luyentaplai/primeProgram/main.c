#include <stdio.h>
#include <stdlib.h>
/*
21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/

int main()
{

    int number = 0;
    char ch;//Chứa \n


    do{

        do{//Nhập vào một số nguyên đích thuc:
            printf("\nInput so nguyen: ");
            scanf("%d", &number);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nSai roi. Nhap lai di!!!");
                printf("\n");
            }
        }while(ch != 10);

        int isPrime = 1;
        if(number >= 2){//Kiểm tra coi phải số nguyên tố không. In ra và chỉ dừng khi nhập 0:
            for(int i = 2; i <= number - 1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\nDay la so nguyen to");
            }else{
                printf("\nKhong phai so nguyen to dau!!!");
            }
        }else{
            printf("\nKhong phai so nguyen to dau!!!");
        }
        printf("\n")
    }while(number != 0);

    return 0;
}
