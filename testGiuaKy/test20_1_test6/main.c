#include <stdio.h>
#include <stdlib.h>
/*
8.hàm nhận vào start và end
tính trung bình nhân của các số từ start đến end
*/
float geomatric(int start, int end);
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

    printf("\nKet qua: %f", geomatric(start, end));
    return 0;
}
float geomatric(int start, int end){
    int count = 0;
    float result = 1;
    for(int i = start; i <= end; i++){
        result *= i;
        count++;
    }
    return pow(result, (float)1/count);
}
