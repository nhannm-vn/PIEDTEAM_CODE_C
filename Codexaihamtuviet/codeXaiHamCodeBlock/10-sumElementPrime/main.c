#include <stdio.h>
#include <stdlib.h>
/*Bài 1: Nhập vào n nguyên dương. Đếm số lượng chữ số của n là số nguyên tố.

Đầu vào: 1222333999888 .Kết quả: 6
*/

int countElementPrime(int number);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n > 0: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int count = 0;
    count = countElementPrime(n);
    printf("\nCo %d chu so nguyen to", count);

    return 0;
}

int countElementPrime(int number){
    int tmp = number;
    int rye  = 0;
    int count = 0;
    while(tmp != 0){
        rye = tmp % 10;
        int isPrime = 1;
        if(rye >= 2){
            for(int i = 2; i <= rye - 1; i++){
                if(rye % i == 0){
                    isPrime  = 0;
                    break;
                }
            }
            if(isPrime){
                count++;
            }
        }
        tmp /= 10;
    }
    return count;
}
