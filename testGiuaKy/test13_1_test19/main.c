#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào ba số thực đại diện cho a,b,c
là hệ số của phương trình aX^2 + bX + c = 0
tìm nghiệm của phương trình trên
*/

void checkEquation(float a, float b, float c);

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    printf("\nNhap vao so a: ");
    scanf("%f", &a);

    printf("\nNhap vao so b: ");
    scanf("%f", &b);

    printf("\nNhap vao so c: ");
    scanf("%f", &c);

    checkEquation(a, b, c);
    return 0;
}

void checkEquation(float a, float b, float c){
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\npt vsn");
            }else{
                printf("\npt vn");
            }
        }else{
            printf("x = %f", -c/b);
        }
    }else{
        float del = b*b - 4*a*c;
        if(del > 0){
            printf("\nx1 = %f, x2 = %f", (float)(-b-sqrt(del))/(2*a), (float)(-b+sqrt(del))/(2*a));
        }else if(del == 0){
            printf("\nx1 = x2 = %f", (float)-b/(2*a));
        }else{
            printf("\npt vn");
        }
    }
}
