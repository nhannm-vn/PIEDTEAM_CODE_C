#include <stdio.h>
#include <stdlib.h>
//Nhập số nguyên n. Tính n!
//Vd nhập n=5 1*2*3*4*5

int main()
{
    int n;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nSai roi. Moi nhap lai!");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    long int tich = 1;
    for(int i = 1; i <= n; i++){
        tich *= i;
    }
    printf("\n%d! = %d", n, tich);

    return 0;
}
