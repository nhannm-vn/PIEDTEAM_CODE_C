#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên và kiểm tra xem nó có phải là số nguyên tố hay không
int main()
{
    int number = 0;
    char ch;
    do{
        printf("\nInput number di: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nMoi nhap lai!!");
            printf("\n");
        }
    }while(ch != 10);

    if(number >= 2){
        int isPrime = 1;
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("\nLa so nguyen to do nhen");
        }else{
            printf("\nKhong phai dau nhen");
        }
    }else{
        printf("\nKhong phai dau nhen");
    }



    return 0;
}
