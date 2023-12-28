#include <stdio.h>
#include <stdlib.h>
//Số chính phương là số nếu
// căn 2 của một số được số nguyên thì đó là số chính phương

//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không
int main()
{
    int number = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nSai roi. Nhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    if(sqrt(number) == (int)sqrt(number)){
        printf("\nLa so chinh phuong do");
    }else{
        printf("\nKhong la so chinh phuong");
    }


    return 0;
}
