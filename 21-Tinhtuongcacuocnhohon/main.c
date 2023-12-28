#include <stdio.h>
#include <stdlib.h>

//Nhập số nguyên n
//Tính tổng các ước số nhỏ hơn chính nó

int main()
{
    int n;
    printf("\nNhap vao so n: ");
    scanf("%d", &n);

    int sum = 0;
    printf("\nCac uoc so nguyen nho hon n la: ");
    for(int i = 1; i <= n - 1; i++){
        if(n % i == 0){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nTong cac uoc nho hon chinh no la: %d", sum);

    return 0;
}
