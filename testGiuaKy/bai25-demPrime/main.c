#include <stdio.h>
#include <stdlib.h>
/*
•	25.Viết Hàm hông có đầu vào đầu vô,Nhập vào 1 khoảng Start và End,
Đếm số lượng và tính tổng các số nguyên tố có trong khoảng ( 4p )
*/

void checkInterval();

int main()
{

    checkInterval();



    return 0;
}

void checkInterval(){
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    int count = 0;
    int sum = 0;
    for(int i = start; i <= end; i++){
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
    printf("\nso luong: %d\ntong: %d", count, sum);
}
