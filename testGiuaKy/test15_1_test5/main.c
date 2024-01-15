#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào start và end, tìm các số nguyên tố trong khoảng từ start đến end
sao cho đảo ngược của số đó cũng là số nguyên tố ( 6p )
*/
void checkNumber(int start, int end);
int checkPrime(int n);
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
    printf("\nCac so thoa man la: ");
    checkNumber(start, end);

    return 0;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
void checkNumber(int start, int end){
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            int tmp = i;
            int rye = 0;
            int m = 0;
            while(tmp != 0){
                rye = tmp % 10;
                m = m * 10 + rye;
                tmp /= 10;
            }
            if(checkPrime(m)){
                printf("%d ", i);
            }
        }
    }
}
