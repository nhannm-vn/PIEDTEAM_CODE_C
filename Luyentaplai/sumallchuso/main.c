#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput mot so di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai ne!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    printf("\nTong cac chu so la: %d", sum);


    return 0;
}
