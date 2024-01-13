#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
*/

void findMaxNumber(int a, int b, int c);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("\nNhap vao a: ");
    scanf("%d", &a);

    printf("\nNhap vao b: ");
    scanf("%d", &b);

    printf("\nNhap vao c: ");
    scanf("%d", &c);

    printf("\nMax: ");
    findMaxNumber(a, b, c);
    return 0;
}
void findMaxNumber(int a, int b, int c){
    if(a > b && a > c){
        printf("%d", a);
    }else if(b > c && b > a){
        printf("%d", b);
    }else if(c > a && c > b){
        printf("%d", c);
    }else if(a > b && a == c){
        printf("%d, %d", a, c);
    }else if(b > c && b == a){
        printf("%d, %d", b, a);
    }else if(b > a && b == c){
        printf("%d, %d", b, c);
    }else{
        printf("%d, %d, %d", a, b, c);
    }
}
