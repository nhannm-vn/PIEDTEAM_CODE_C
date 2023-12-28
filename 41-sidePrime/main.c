#include <stdio.h>
#include <stdlib.h>
//Nhập vào start end và một biến number. Tìm số nguyên tố thứ number trong khoảng đó
//Ví dụ start = 1, end = 5, n = 2. Thì in ra số 3
// 2 3 5 7 11 13 17 19 23 27 29 31
int main()
{
    int start = 0;
    int end = 0;
    printf("\nInput start: ");
    scanf("%d", &start);

    printf("\nInput end: ");
    scanf("%d", &end);

    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end = tmp;
    }

    int rye = 0;
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
                count++;//So thu tu
                rye = i;//Chua so nguyen to tai vi tri count
            }
            if(n == count){
                printf("\nTai vi tri %d co so nguyen to la: %d", n, rye);
                return 0;
            }
        }

    }




    return 0;
}
