#include <stdio.h>
#include <stdlib.h>
/*
8.hàm nhận vào start và end
tính trung bình nhân của các số từ start đến end
*/
float geometricNumber(int start, int end);
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

    }
    printf("\nTrung binh nhan la: %f", geometricNumber(start, end));

    return 0;
}
float geometricNumber(int start, int end){
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul, (float)1/count);
}
