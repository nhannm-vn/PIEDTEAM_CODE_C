#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên n >= 2
//Tính tích các số chẵn và tích các số lẻ từ 1 dến n - 1

//vd: nhập n = 5
//tích các số chẵn 2 * 4
//tích các số lẻ 1 * 3
void mulEvenOdd(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\Nhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 2){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10 || n < 2);
    mulEvenOdd(n);
    return 0;
}
void mulEvenOdd(int n){
    int mulEven = 1;
    int mulOdd = 1;
    int hasEven = 0;
    int hasOdd = 0;
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
