#include <stdio.h>
#include <stdlib.h>
//in ra man hinh cac so nguyen to trong khoang tu start den end

int checkPrime(int n){
    int isPrime = 1;
    if(n >= 2){
        for(int  i = 2; i <= n - 1; i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            return 1;
        }else{
            return 2;
        }
    }else{
        return 2;
    }
}


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
    printf("\nCac so nguyen to la: ");
    for(int i = start; i <= end; i++){
        if(checkPrime(i) == 1){
            printf("%d ", i);
        }
    }


    return 0;
}
