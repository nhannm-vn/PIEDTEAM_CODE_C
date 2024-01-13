#include <stdio.h>
#include <stdlib.h>
//Nhập vào start end và một biến number.
//Tìm số nguyên tố thứ number trong khoảng đó
//Ví dụ start = 1, end = 5, n = 2. Thì in ra số 3
// 2 3 5 7 11 13 17 19 23 27 29 31

int sideNumber(int start, int end, int n);

int main()
{
    int start = 0;
    int end = 0;
    int n = 0;

    printf("\nNhap vao start: ");
    scanf("%d", &start);

    printf("\nNhap vao end: ");
    scanf("%d", &end);

    printf("\nNhap so n: ");
    scanf("%d", &n);


    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("\nTai vi tri %d thi snt: %d", n, sideNumber(start, end, n));

    return 0;
}
int sideNumber(int start, int end, int n){
    int count = 0;
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
                count++;
            }
            if(count == n){
                return i;
            }
        }
    }
}
