#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    printf("\nInput a: ");
    scanf("%f", &a);

    printf("\nInput b: ");
    scanf("%f", &b);

    printf("\nInput c: ");
    scanf("%f", &c);

    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\nPt vsn");
            }else{
                printf("\nPt vn");
            }
        }else{
            printf("\nPt co 1 nghiem x = %f", -c/b);
        }
    }else{
        float del = b*b - 4*a*c;
        if(del > 0){
            printf("\nx1 = %f, x2 = %f", (-b-sqrt(del))/(2*a), (-b+sqrt(del))/(2*a));
        }else if(del == 0){
            printf("\nx1 = x2 = %f", -b/(2*a));
        }else{
            printf("\nPt vn");
        }
    }


    return 0;
}
