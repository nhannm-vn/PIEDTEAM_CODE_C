#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 kí tự thuộc alphabet thường
//Ép người dùng nhập kí tự thường

//In ra kí tự đó dưới dạng kí tự, số, octal
int main()
{
    char ch;
    do{
        printf("\nHay nhap vao mot ki tu thuong di: ");
        scanf("%c", &ch);
        fflush(stdin);
    }while(ch < 97 || ch > 122);

    printf("%c, %d, %o", ch, ch, ch);

    return 0;
}
