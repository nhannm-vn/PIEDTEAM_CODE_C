#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    do{
        printf("\nInput ki tu thuong: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nMoi nhap lai!");
        }
    }while(ch < 97 || ch > 122);

    printf("%d, %c, %o", ch, ch, ch);


    return 0;
}
