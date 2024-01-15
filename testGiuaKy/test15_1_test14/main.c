#include <stdio.h>
#include <stdlib.h>
//chữ thường thành chữ hoa

void upperCase(char *ch);
int main()
{
    char ch;
    do{
        printf("\nNhap vao ki tu thuong: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch < 97 || ch > 122);

    upperCase(&ch);
    printf("\nch = %c", ch);
    return 0;
}
void upperCase(char *ch){
    *ch = *ch - 32;
}
