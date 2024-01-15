#include <stdio.h>
#include <stdlib.h>
//Nhập vào một chữ cái thuong và đổi nó ra hoa bằng con trỏ

void upperCase(char *ch);
int main()
{
    char ch;
    do{
        printf("\nNhap vao mot chu cai thuong: ");
        scanf("%c", &ch);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai di!");
            printf("\n");
            fflush(stdin);
        }
    }while(ch < 97 || ch > 122);

    upperCase(&ch);
    printf("\nch = %c", ch);


    return 0;
}
void upperCase(char *ch){
    *ch = *ch - 32;
}
