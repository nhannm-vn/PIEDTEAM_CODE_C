#include <stdio.h>
#include <stdlib.h>
//Tìm chữ số lớn nhất của số nguyên dương n

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
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    printf("\nChu so lon nhat: %d", maxElementNumber(n));


    return 0;
}
int maxElementNumber(int n){
    int tmp = n;
    int rye = 0;
    int max = 0;
    while(tmp != 0){
        rye = tmp % 10;
        if(rye > max){
            max = rye;
        }
        tmp /= 10;
    }
    return max;
}


