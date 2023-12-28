#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nMoi nhap vao so: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nYeu cau nhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    if(sqrt(n) == (int)sqrt(n)){
        printf("\nLa so chinh phuong do!");
    }else{
        printf("\nKhong phai so chinh phuong dau!");
    }


    return 0;
}
