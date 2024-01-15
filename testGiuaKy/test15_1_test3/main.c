#include <stdio.h>
#include <stdlib.h>
/*
Nhap vao start va end roi tinh tich chan va le
*/
void mulEvenOdd(int start, int end);
int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap vao start: ");
    scanf("%d", &start);

    printf("\nNhap vao end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    mulEvenOdd(start, end);
    return 0;
}
void mulEvenOdd(int start, int end){
    int mulEven = 1, mulOdd = 1;
    int hasEven = 0, hasOdd = 0;
    for(int i = start; i <= end; i++){
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
