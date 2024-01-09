#include <stdio.h>
#include <stdlib.h>
//Nhập vào start và end rồi tính trung bình nhân

float geomatric(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap so start: ");
    scanf("%d", &start);

    printf("\nNhap so end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    float result = geomatric(start, end);
    printf("%f", result);

    return 0;
}
float geomatric(int start, int end){
    int mul = 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul, (float)1/count);
}
