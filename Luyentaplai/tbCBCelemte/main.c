#include <stdio.h>
#include <stdlib.h>
//5.Nhập vào số nguyên dương n, tính trung bình cộng của các chữ số trong n

float tbcElementNumber(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap n di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    printf("\n%f", tbcElementNumber(n));

    return 0;
}

float tbcElementNumber(int n){
    int tmp = n;
    int rye = 0;
    int sum = 0;
    int count = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        count++;
        tmp /= 10;
    }
    return (float)sum/count;
}
