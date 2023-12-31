#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai!");
        }
    }while(ch != 10 || n < 0);

    int tmp = 0;
    int max = 0;
    while(n != 0){
        tmp = n % 10;
        if(tmp >= max){
            max = tmp;
        }
        n /= 10;
    }
    printf("\nChu so lon nhat la: %d", max);

    return 0;
}