#include <stdio.h>
#include <stdlib.h>
//Nhập vào 3 số nguyên là a b c
//Kiểm tra xem a,bc có tạo thành tam giác không.
//Nếu có thì là tam giac gì
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    char ch;
    char sh;
    char ah;

    do{
        printf("\nNhap vao a di: ");
        scanf("%d", &a);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || a <= 0){
            printf("\nDa sai. Moi nhap lai!");
        }
        printf("\n");
    }while(ch != 10 || a <= 0);

    do{
        printf("\nNhap vao b di: ");
        scanf("%d", &b);
        scanf("%c", &sh);
        fflush(stdin);
        if(ch != 10 || b <= 0){
            printf("\nDa sai. Moi nhap lai!");
        }
        printf("\n");
    }while(ch != 10 || b <= 0);


    do{
        printf("\nNhap vao c di: ");
        scanf("%d", &c);
        scanf("%c", &ah);
        fflush(stdin);
        if(ch != 10 || c <= 0){
            printf("\nDa sai. Moi nhap lai!");
        }
        printf("\n");
    }while(ch != 10 || c <= 0);

    if(a + b > c && a + c > b && b + c > a){
        if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
            printf("\nLa tam giac vuong");
        }else if(a == b || a == c || b == c){
            if(a == b && b == c){
                printf("\nLa tam giac deu");
            }else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
                printf("\nLa tam giac vuong can");
            }else{
                printf("\nLa tam giac can");
            }
        }else{
            printf("\nLa tam giac thuong");
        }
    }else{
        printf("\nKhong phai tam giac");
    }

    return 0;
}
