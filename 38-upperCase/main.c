#include <stdio.h>
#include <stdlib.h>

//Nhập vào  kí tự thường và biến thành hoa

int main()
{
    char ch;
    do{
        printf("\nInput ki tu: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nMoi nhap lai: ");
            printf("\n");
        }
    }while(ch < 97 || ch > 122);

    ch = ch - 32;

    printf("\nch = %c", ch);


    return 0;
}
