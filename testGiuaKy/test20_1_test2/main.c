#include <stdio.h>
#include <stdlib.h>
//Nhập vào start end và một biến number. Tìm số
//nguyên tố thứ number trong khoảng đó
//Ví dụ start = 1, end = 5, n = 2. Thì in ra số 3
// 2 3 5 7 11 13 17 19 23 29 31
int findPrime(int start, int end, int n);
int checkPrime(int n);
int main()
{
    int start = 0;
    int end = 0;
    int n = 0;
    char ch;
    printf("\nNhap vao start: ");
    scanf("%d", &start);

    printf("\nNhap vao end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    do{
        printf("\nNhap vao vi tri n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    printf("\nTai vi tri %d thi so nguyen to la: %d", n, findPrime(start, end, n));

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
int findPrime(int start, int end, int n){
    int count = 0;
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){//1 2 3 4
            count++;
        }
        if(count == n){
            return i;
        }
    }
}
