#include <stdio.h>
#include <stdlib.h>
//Biến chữ cái thường thành hoa bằng con trỏ
void upperCase(char *ch);
int main()
{
    char ch;
    do{
        printf("\nNhap vao chu cai thuong: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch < 97 || ch > 122);
    upperCase(&ch);
    printf("\nChu hoa la: ");
    printf("\nch = %c", ch);

    return 0;
}
void upperCase(char *ch){
    *ch = *ch - 32;
}
