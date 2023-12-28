#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào start và end, tìm các số nguyên tố trong khoảng từ start đến end sao
cho đảo ngược của số đó cũng là số nguyên tố ( 6p )
*/
int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    printf("\nCac so thoa man: ");
    for(int i = start; i <= end; i++){//Kiem tra so do co la ngto ko
        int isPrime = 1;
        if(i >= 2){
            for(int j = 2; j <= i - 1; j++){
                if(i % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                int tmp = i;
                int m = 0;
                int rye = 0;
                while(tmp != 0){//Dao nguoc so do
                    rye = tmp % 10;
                    m = m*10 + rye;
                    tmp /= 10;
                }
                if(m >= 2){//Kiem tra so do nguyen to hay k
                    int iPrime = 1;
                    for(int k = 2; k <= m - 1; k++){
                        if(m % k == 0){
                            iPrime = 0;
                            break;
                        }
                    }
                    if(iPrime){
                        printf("%d ", i);
                    }
                }
            }
        }
    }

    return 0;
}
