#include <stdio.h>
#include <stdlib.h>
//viet ham nhan vao 3 he so roi tinh nghiem cua chung
void equation(float a, float b, float c);
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    printf("\nNhap vao he so a: ");
    scanf("%f", &a);

    printf("\nNhap vao he so b: ");
    scanf("%f", &b);

    printf("\nNhap vao he so c: ");
    scanf("%f", &c);

    equation(a, b, c);
    return 0;
}
void equation(float a, float b, float c){
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\nvsn");
            }else{
                printf("\nvn");
            }
        }else{
            printf("\nx = %f", -c/b);
        }
    }else{
        float del = b * b - 4 * a * c;
        if(del > 0){
            printf("\nx1 = %f, x2 = %f", (-b-sqrt(del))/(2*a), (-b+sqrt(del))/(2*a));
        }else if(del == 0){
            printf("\nx1 = x2 = %f", -b/(2*a));
        }else{
            printf("\nvn");
        }
    }
}
