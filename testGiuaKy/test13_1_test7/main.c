#include <stdio.h>
#include <stdlib.h>
//Bài 5: Viết chương trình nhập vào 3 số thực
//Hãy in 3 số ấy ra màn hình theo thứ tự tang dần mà chỉ dùng tối đa 1 biến phụ

void sapXepNe(float a, float b, float c);

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

    printf("\nSap xep la: ");
    sapXepNe(a, b, c);

    return 0;
}
void sapXepNe(float a, float b, float c){
    float tmp = 0;
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
    printf("%f, %f, %f", a, b, c);
}
