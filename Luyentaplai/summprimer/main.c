#include <stdio.h>
#include <stdlib.h>

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

    int count = 0;
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
                count++;
            }
        }
    }
    printf("\nCo tong cong %d so nguyen to", count);

    return 0;
}
