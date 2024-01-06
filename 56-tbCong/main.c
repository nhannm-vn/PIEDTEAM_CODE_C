#include <stdio.h>
#include <stdlib.h>

//5.Nhập vào số nguyên dương n, tính trung bình cộng của các chữ số trong n

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int tmp = n;
    int rye = 0;
    int count = 0;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        count++;
        tmp /= 10;
    }
    float result = (float)sum/count;
    printf("\n%f", result);

    return 0;
}
