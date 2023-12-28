#include <stdio.h>
#include <stdlib.h>
//Nhập vào  kí tự thường và biến thành hoa
int main()
{
    char ch;
    do
    {
        printf("\nInput ki tu thuong: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai!!");
        }
    }while(ch < 97 || ch > 122);

    ch -= 32;
    printf("\nch = %c", ch);


    return 0;
}
