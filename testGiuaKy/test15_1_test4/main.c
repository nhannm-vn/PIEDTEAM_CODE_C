#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào 1 khoảng Start và End, Đếm số lượng và
tính tổng các số nguyên tố có trong khoảng
*/
int checkPrime(int n);
void getPrime(int start, int end);
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
    getNumber(start, end);
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
void getNumber(int start, int end){
    int sum = 0;
    int count = 0;
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            count++;
            sum += i;
        }
    }
    printf("\nTong: %d\nSo luong: %d", sum, count);
}
