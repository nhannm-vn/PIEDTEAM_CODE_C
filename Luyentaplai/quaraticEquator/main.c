#include <stdio.h>
#include <stdlib.h>

//Nhập vào hệ số a, b, c
//In ra các nghiệm của phuong trình

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

    //TH1 a = 0

    if(a == 0){
        //Pt bac 1:
        if(b == 0){
            if(c != 0){
                printf("\nPhuong trinh vo nghiem");
            }else{
                printf("\nPhuong trinh vo so nghiem");
            }
        }else{
            printf("\nPhuong trinh co 1 nghiem duy nhat la: %.2f", -c/b);
        }
    }else{
        float del;
        del = pow(b,2) - 4 * a * c;
        if(del > 0){
            printf("\nPhuong trinh co hai nghiem pb x1 = %.2f, x2 = %.2f", (-b - sqrt(del))/(2*a), (-b + sqrt(del))/(2*a));
        }else if(del == 0){
            printf("\nPhuong trinh co nghiem kep: x1 = x2 = %.2f", -b/2*a);
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }


    return 0;
}
