#include <stdio.h>
#include <stdlib.h>

//Nhập vào độ dài ba cạnh của một tam giác
//Xét xem thử xem đó là tam giác gì?

int main()
{
    int a;
    int b;
    int c;

    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    printf("\nInput c: ");
    scanf("%d", &c);

    //Đầu tiên xét điều kiện trở thành một tam giác trước
    if(a + b > c && a + c > b && b + c > a){
        if(pow(a,2) + pow(b,2) == pow(c,2) || pow(b,2) + pow(c,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2)){
            printf("\nTam giac vuong");
        }else if(a == b || b == c || a == c){
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(b,2) + pow(c,2) == pow(a,2) || pow(a,2) + pow(c,2) == pow(b,2)){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai la tam giac");
    }






    return 0;
}
