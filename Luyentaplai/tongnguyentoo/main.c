#include <stdio.h>
#include <stdlib.h>

/*
Nhập vào một khoảng từ start đến end
In ra các số nguyên tố trong khoảng đó
Tính tổng các số nguyên tố đó
*/

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
        start = end;
        end = tmp;
    }

    int sum = 0;
    printf("\nCac so nguyen to la: ");
    for(int i = start; i <= end; i++){
        if(i >= 2){
            int isPrime = 1;
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("%d ", i);
                sum += i;
            }
        }
    }
    printf("\nTong cac so nguyen to la: %d", sum);

    return 0;
}
