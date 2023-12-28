#include <stdio.h>
#include <stdlib.h>
//Nhập vào lần lượt ba số hệ số nguyên a, b, c:
//In ra nghiệm của phương trình bậc 2: aX^2 + bX + c

int main()
{
    float a, b, c;

    printf("\nInput a: ");
    scanf("%f", &a);

    printf("\nInput b: ");
    scanf("%f", &b);

    printf("\nInput c: ");
    scanf("%f", &c);

    //Xét lần lượt 2 trường hợp chính a = 0 or a != 0


    if(a == 0){//Phuong trinh: bX + c = 0
        if(b == 0){
            if(c == 0){
                printf("\nPhuong trinh vo so nghiem");
            }else{
                printf("\nPhuong trinh vo nghiem");
            }
        }else{
            if(c == 0){
                printf("\nPhuong trinh co 1 nghiem duy nhat x = 0");
            }else{
                printf("\nPhuong trinh co 1 nghiem duy nhat x = %f", -c/b);
            }
        }
    }else{//Phuong trinh: aX^2 + bX + c = 0
        float del;
        del = pow(b,2) - 4*a*c;
        printf("\n%.2f", del);
        if(del > 0){
            printf("\nPhuong trinh co hai nghiem phan biet x1 = %.2f, x2 = %.2f", (-b - sqrt(del))/2*a, (-b + sqrt(del))/2*a);
        }else if(del == 0){
            printf("\nPhuong trinh co nghiem kep x1 = x2 = %f", -b/2*a);
        }else{
            printf("\nPhuong trinh vo nghiem");
        }
    }


    return 0;
}
