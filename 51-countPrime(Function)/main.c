#include <stdio.h>
#include <stdlib.h>
//29-countPrime
//Nhập vào start va end trong đoạn đó số nào là số nguyên tố thì in ra
//thì đếm
//thì tính tổng

int checkPrime(int number);

int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    int count = 0;
    int sum = 0;
    printf("\nCac so nguyen to la: ");
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\nTong: %d\nSo luong: %d", sum, count);

    return 0;
}

int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
