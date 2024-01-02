#include <stdio.h>
#include <stdlib.h>

/*
Bai 5: Lập chương trình giải hệ: ax + by = c,
dx + ey = f. Các hệ số nhập từ bàn phím
*/

int main()
{
    int a, b, c, d, e, f;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    printf("\nInput c: ");
    scanf("%d", &c);

    printf("\nInput d: ");
    scanf("%d", &d);

    printf("\nInput e: ");
    scanf("%d", &e);

    printf("\nInput f: ");
    scanf("%d", &f);
    //ax + by = c,
    //dx + ey = f

    int D = a*e - b*d;
    int Dx = c*e - b*f;
    int Dy = a*f - d*c;

    if(D == 0){
        if(Dx == 0 && Dy == 0){
            printf("\nHe vsn");
        }else{
            printf("\nHe vn");
        }
    }else{
        printf("\nx = %f", (float)Dx/D);
        printf("\ny = %f", (float)Dy/D);
    }


    return 0;
}
