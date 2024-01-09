#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào 1 khoảng Start và End, Đếm số lượng và tính tổng các số nguyên tố có trong khoảng ( 4p )
*/
int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int sum = 0;
    int count = 0;
    for(int i = start; i <= end; i++){
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j<= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                sum += i;
                count++;
            }
        }
    }
    printf("%d snt\ntong: %d", count, sum);


    return 0;
}
