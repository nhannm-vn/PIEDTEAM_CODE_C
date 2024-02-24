#include <stdio.h>
#include <stdlib.h>
int sumElement(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    int result = sumElement(n);
    printf("\nsum = %d", result);
    return 0;
}
int sumElement(int n){
    int tmp = n;
    int rye = 0;
    int sum = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
