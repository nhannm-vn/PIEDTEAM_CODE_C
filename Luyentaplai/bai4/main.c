#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n  = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nMoi nhap lai!");
        }
    }while(ch != 10 || n < 1);

    int tmp = 0;
    printf("\nSo dao nguoc la: ");
    while(n != 0){
        tmp = n % 10;
        printf("%d", tmp);
        n /= 10;
    }


    return 0;
}