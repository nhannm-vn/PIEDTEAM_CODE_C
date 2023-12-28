#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nMoi nhap n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nMoi nhap lai !");
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow((-1), i) * (2 * i) / (2 * i + 1);
    }
    printf("\nKet qua la: %f", sum);

    return 0;
}
