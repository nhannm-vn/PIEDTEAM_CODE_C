#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào ba số thực đại diện cho a,b,c
là hệ số của phương trình aX^2 + bX + c = 0
tìm nghiệm của phương trình trên
căn 5 của a => pow(a, (float)1/5)
*/
int main()
{
    float a;
    float b;
    float c;

    printf("\nInput a: ");
    scanf("%f", &a);

    printf("\nInput b: ");
    scanf("%f", &b);

    printf("\nInput c: ");
    scanf("%f", &c);

    if(a == 0){
        if(b == 0){
            if(c != 0){
                printf("\nPhuong tinh vo nghiem");
            }else{
                printf("\nPhuong trinh vo so nghiem");
            }
        }else{
            printf("\nx = %.2f", -c / b);
        }
    }else{
        float del;
        del = pow(b,2) - 4*a*c;
        if(del > 0){
            printf("\nx1 = %.2f, x2 = %.2f", (-b - sqrt(del)) / (2*a), (-b + sqrt(del)) / (2*a));
        }else if(del == 0){
            printf("\nx1 = x2 = %.2f", -b / (2*a));
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }


    return 0;
}
