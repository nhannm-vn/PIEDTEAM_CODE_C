#include <stdio.h>
#include <stdlib.h>
/*
14.Nhập vào start và end, tìm các số nguyên tố trong khoảng từ start đến end
sao cho đảo ngược của số đó cũng là số nguyên tố ( 6p )
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

    printf("\nCac so thoa man la: ");

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
                int tmp = i;
                int rye = 0;
                int m = 0;
                while(tmp != 0){
                    rye = tmp % 10;
                    m = m * 10 + rye;
                    tmp /= 10;
                }

                int iPrime = 1;
                if(m >= 2){
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
