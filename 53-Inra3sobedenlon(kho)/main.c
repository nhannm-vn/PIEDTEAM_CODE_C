#include <stdio.h>
#include <stdlib.h>
/*
//Viết chương trình nhập vào 3 số thực.
//Hãy in 3 số ấy ra màn hình theo thứ tự tang
dần mà chỉ dùng tối đa 1 biến phụ

*/
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

    int tmp = 0;
    while(a > b || a > c || b > c){
        if(a > b){
            tmp = a;
            a = b;
            b = tmp;
        }
        if(a > c){
            tmp = a;
            a = c;
            c = tmp;
        }
        if(b > c){
            tmp = b;
            b = c;
            c = tmp;
        }
    }
    printf("\nSap xep la: %.2f %.2f %.2f", a, b, c);


    return 0;
}
