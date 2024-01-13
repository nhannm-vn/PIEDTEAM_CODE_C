#include <stdio.h>
#include <stdlib.h>
//29-countPrime
//Nhập vào start va end trong đoạn đó số nào là số nguyên tố thì in ra
//thì đếm
//thì tính tổng

//Nếu đề bài là tính thì khác void
//bai 1 đầu ra int

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
    int count = 0;
    int sum = 0;
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
