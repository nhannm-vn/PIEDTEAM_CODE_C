#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên bắt người dùng nhập đúng số nguyên nghiêm túc

int main()
{
    int number;
    int ch;//Chứa
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nketket ");
        }
    }while(ch != 10);


    return 0;
}
