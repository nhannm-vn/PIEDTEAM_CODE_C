#include <stdio.h>
#include <stdlib.h>
//Viết hàm tính nghiệm phương trình bậc 2
void equationBac2(float a, float b, float c);
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    printf("\nNhap vao a: ");
    scanf("%f", &a);
    printf("\nNhap vao b: ");
    scanf("%f", &b);
    printf("\nNhap vao c: ");
    scanf("%f", &c);

    equationBac2(a, b, c);
    return 0;
}
void equationBac2(float a, float b, float c){
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\nVSN");
            }else{
                printf("\nVN");
            }
        }else{
            printf("\nx = %f", (float)-c/b);
        }
    }else{
        float del = b*b - 4*a*c;
        if(del > 0){
            printf("\nx1 = %f, x2 = %f", (float)(-b-sqrt(del))/(2*a), (float)(-b+sqrt(del))/(2*a));
        }else if(del == 0){
            printf("\nx1 = x2 = %f", (float)-b/(2*a));
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }
}
