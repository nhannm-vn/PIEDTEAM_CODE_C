#include <stdio.h>
#include <stdlib.h>
//Nhập vào lần lượt ba số hệ số nguyên a, b, c:
//In ra nghiệm của phương trình bậc 2: aX^2 + bX + c
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

    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\npt vsn");
            }else{
                printf("\npt vn");
            }
        }else{
            printf("\nx = %f", (float)-c/b);
        }
    }else{
        float del = b * b - 4 * a * c;
        if(del > 0){
            printf("x1 = %f, x2 = %f", (float)(-b-sqrt(del))/(2*a), (float)(-b+sqrt(del))/(2*a));
        }else if(del == 0){
            printf("x1 = x2 = %f", (float)-b/(2*a));
        }else{
            printf("\npt vn");
        }
    }

    return 0;
}
