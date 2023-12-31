#include <stdio.h>
#include <stdlib.h>
/*
-   Viết Hàm hông có đầu vào đầu ra,Nhập vào 1 khoảng Start và End,
Đếm số lượng và tính tổng các số nguyên tố có trong khoảng ( 4p )
*/

void checkPrime(void);

int main()
{
    checkPrime();

    return 0;
}

void checkPrime(void){
    int start = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    int end = 0;
    printf("\nInput end: ");
    scanf("%d", &end);

    if(start > end){
        int thu = 0;
        thu = start;
        start = end;
        end = thu;
    }
    int count = 0;
    int sum = 0;
    for(int i  = start; i <= end; i++){
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                count++;
                sum += i;
            }
        }
    }
    printf("\nSo luong so nguyen to: %d", count);
    printf("\nTong: %d", sum);

}
