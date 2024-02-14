#include <stdio.h>
#include <stdlib.h>
//tich chan, tich le tu 1 den n-1
void mulEvenOdd(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 1){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || n <= 1);

    mulEvenOdd(n);
    return 0;
}
void mulEvenOdd(int n){
    int mulEven = 1, mulOdd = 1;
    int hasEven = 0, hasOdd = 0;
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
    printf("\nTich chan: %d\nTich le: %d", mulEven, mulOdd);
}
