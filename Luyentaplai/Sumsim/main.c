#include <stdio.h>
#include <stdlib.h>

/*
Nhập vào khaongr từ start đến end
In ra các số nguyên tố
Tính tổng của chúng
*/

int main()
{
    int start;
    int end;

    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    //Ca Chon:
    if(start > end){
        int tmp;
        tmp = start;
        start = end;
        end = tmp;
    }

    int sum = 0;
    printf("\nCac co prime: ");
    for(int i = start; i <= end; i++){
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime =0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%5d", i);
                sum += i;
            }
        }
    }

    printf("\nTong cac so prime la: %d", sum);




    return 0;
}
