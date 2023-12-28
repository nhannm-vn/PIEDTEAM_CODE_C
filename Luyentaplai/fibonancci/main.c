#include <stdio.h>
#include <stdlib.h>
//Nhập vào vị trí n của dãy fibonancci
//Hãy in ra giá trị của vị trí n

int main()
{
    //0 1 1 2 3 5 8
    //0 1 2 3 4 5 6
    int prev;
    int curr;
    int result;

    prev = 0;
    curr = 1;
    result = 1;

    int n;
    printf("\nNhap vao vi tri can xem gia tri: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    printf("\nTai vi tri %d thi day fibonacci co gia tri la: %d", n, result);

    return 0;
}
