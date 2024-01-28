#include <stdio.h>
#include <stdlib.h>
//Nhập vào start end và một biến number. Tìm số nguyên tố thứ number trong khoảng đó
//Ví dụ start = 1, end = 5, n = 2. Thì in ra số 3
// 2 3 5 7 11 13 17 19 23 27 29 31
int checkPrime(int n);
int findPrime(int start, int end, int pos);
int main()
{
    int start = 0;
    int end = 0;
    int pos = 0;
    printf("\nNhap vao start: ");
    scanf("%d", &start);

    printf("\nNhap vao end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("\nNhap vao vi tri: ");
    scanf("%d", &pos);

    printf("\nSo nguyen to o vi tri %d la: %d", pos, findPrime(start, end, pos));
    return 0;
}
int findPrime(int start, int end, int pos){
    int count = 0;
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            count++;
        }
        if(pos == count){
            return i;
        }
    }
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
