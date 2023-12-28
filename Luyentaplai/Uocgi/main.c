#include <stdio.h>
#include <stdlib.h>

//Nhập vào hai số nguyên dương đàng hoàng. Hãy tìm UCLN của chúng

int main()
{
    int a = 0;
    int b = 0;
    char ch;
    char sh;
    do{
        printf("\nMoi nhap a: ");
        scanf("%d", &a);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || a < 0){
            printf("\nNhap sai. Moi nhap lai!!");
            printf("\n");
        }
    }while(ch != 10 || a < 0);

    do{
        printf("\nMoi nhap b: ");
        scanf("%d", &b);
        scanf("%c", &sh);
        fflush(stdin);
        if(sh != 10 || b < 0){
            printf("\nNhap sai. Moi nhap lai!!");
            printf("\n");
        }
    }while(sh != 10 || b < 0);

    if(a == 0 || b == 0){
        printf("\nUCLN cua a vs b la: %d", abs(a - b));
    }else if(a != 0 && b != 0){
        do{
            if(a > b){
                a = a - b;
            }
            if(b > a){
                b = b - a;
            }
        }while(a != b);
    }

    printf("\nUCLN cua a vs b la: %d", a);

    return 0;
}
