#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình nhận vào 1 số nguyên
tính tổng, tích các thành phần và in ra số đó dưới dạng đảo ngược ( 4p )
*/
void getNumber(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    getNumber(n);

    return 0;
}
void getNumber(int n){
    int sum = 0;
    int mul = 1;
    int tmp = n;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        mul *= rye;
        m = m * 10 + rye;
        tmp /= 10;
    }
    printf("\n%d-%d-%d", sum, mul, m);
}
