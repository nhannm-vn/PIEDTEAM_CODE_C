#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào vị trí n hãy xuất ra kết quả tại ví trí đó của
    //dãy Fibonacci
    int n;
    printf("\nNhap vao vi tri n: ");
    scanf("%d", &n);

    int prev;
    int curr;
    int result;

    //Setup bước đầu tại vị trí n=1:
    prev = 0;
    curr = 1;
    result = 1;

    //In ra giá trị rồi mới setup:
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev =  curr;
        curr = result;
    }

    printf("\nGia tri tai vi tri %d cua day la: %d", n, result);


    return 0;
}
