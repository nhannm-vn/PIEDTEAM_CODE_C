#include <stdio.h>
#include <stdlib.h>
//geomatric: tính trung bình nhân các số từ start đến end:
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
        end = tmp;
    }
    printf("\ntb nhan la: %f", geometricNumber(start, end));

    return 0;
}
float geometricNumber(int start, int end){
    int count = 0;
    int mul = 1;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul,(float)1/count);
}
