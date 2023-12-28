#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    do{
        printf("\nHay nhap vao chu cai thuong: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nSai roi. Moi nhap lai!");
            printf("\n");
        }
    }while(ch < 97 || ch > 122);

    printf("%d, %c, %o", ch, ch, ch);


    return 0;
}
