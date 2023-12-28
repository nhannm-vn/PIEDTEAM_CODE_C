#include <stdio.h>
#include <stdlib.h>

//Tính tổng các số nguyên tố trong khoảng start đến end
//In ra và tính tổng của chúng

int main()
{
    int start;
    int end;

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
    printf("\nCac so nguyen to trong khoang la: ");
    for(int i = start; i <= end; i++){
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("%d ", i);
                sum += i;
            }
        }
    }
    printf("\nTong cac so nguyen to la: %d", sum);






    return 0;
}
