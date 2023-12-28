#include <stdio.h>
#include <stdlib.h>
//Tính tổng các số chẵn, lẻ trong khoảng từ 1 đến n - 1 biết n >= 2
int main()
{
    int n = 0;
    char ch;
    int mulEven = 1;
    int mulOdd = 1;
    int hasEven = 0;
    int hasOdd = 0;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 2){
            printf("\nMoi nhap lai!");
            printf("\n");
        }
    }while(ch != 10 || n < 2);

    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }
    mulEven *= hasEven;
    mulOdd *= hasOdd;

    printf("\nTich cac so chan la: %d", mulEven);
    printf("\nTich cac so le la: %d", mulOdd);

    return 0;
}
