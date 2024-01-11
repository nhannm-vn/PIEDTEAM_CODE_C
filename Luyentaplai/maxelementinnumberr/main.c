#include <stdio.h>
#include <stdlib.h>
//Bài 5: Tìm chữ số lớn nhất của số nguyên dương n(xai ham)

int maxElementNumber(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai");
        }
    }while(ch != 10 || n < 0);

    printf("\nmaxElement: %d", maxElementNumber(n));

    return 0;
}
int maxElementNumber(int n){
    int max = 0;
    int rye = 0;
    int tmp = n;
    while(tmp != 0){
        rye = tmp % 10;
        if(rye >= max){
            max = rye;
        }
        tmp /= 10;
    }
    return max;
}
