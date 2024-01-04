#include <stdio.h>
#include <stdlib.h>
/*
8.hàm nhận vào start và end
tính trung bình nhân của các số từ start đến end
*/

float tbMul(int start, int end);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start =  end;
        end = tmp;
    }

    printf("\nTB nhan: %f", tbMul(start, end));

    return 0;
}
float tbMul(int start, int end){
    int count = 0;
    int mul = 1;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul, (float)1/count);
}
