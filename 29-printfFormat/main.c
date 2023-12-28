#include <stdio.h>
#include <stdlib.h>

//Nhập vào 1 kí tự thuộc alphabet thường
//Ép người dùng nhập kí tự thường

//In ra kí tự đó dưới dạng kí tự, số, octal: hệ tám

int main()
{
    char ch;
    do{
        printf("\nHay nhap vao 1 ki tu di: ");
        scanf("%c", &ch);
        fflush(stdin);//Xóa phân thừa trong bộ nhớ buffer
        if(ch < 97 || ch > 122){
            printf("\nXin moi nhap lai!!!");
            printf("\n");
        }
    }while(ch < 97 || ch > 122);

    printf("%c, %d, %o", ch, ch, ch);




    return 0;
}
