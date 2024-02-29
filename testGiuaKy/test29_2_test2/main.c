#include <stdio.h>
#include <stdlib.h>
void checkTg(int a, int b, int c);
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("\nNhap vao a: ");
    scanf("%d", &a);
    printf("\nNhap vao b: ");
    scanf("%d", &b);
    printf("\nNhap vao c: ");
    scanf("%d", &c);

    checkTg(a, b, c);
    return 0;
}
void checkTg(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a){
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nTam giac vuong");
        }else if(a == b || a == c || b == c){
            if(a == b && b == c){
                printf("\nTam giac deu");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else{
            printf("\nTam giac thuong");
        }
    }else{
        printf("\nKhong phai tam giac");
    }
}
