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

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow((-1), i) * i;
    }
    printf("\nTong cu day la: %d", sum);

    return 0;
}
