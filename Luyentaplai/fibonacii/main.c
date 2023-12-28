#include <stdio.h>
#include <stdlib.h>

int main()
{
    //in ra giá trị tại ví trí n của fibonacci
    //Setup tai n = 1
    int prev = 0;
    int curr = 1;
    int result = 1;

    int n;
    printf("\nNhap vao vi tri n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        result = curr + prev;
        prev = curr;
        curr = result;
    }

    printf("\nGia tri cua day tai vi tri %d la: %d", n, result);

    return 0;
}
