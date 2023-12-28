#include <stdio.h>
#include <stdlib.h>

//Tính tổng của:
//1 + 1/3 +...+1/2n+1

int main()
{
    int n;
    //Ép điều kiện cho khoảng :
    do{
        printf("\nNhap vao gia tri cua n: ");
        scanf("%d", &n);
    }
    while(n < 1);

    //Tính tổng:
    float sum = 1;
    for(int i = 1; i <= n; i++){
        sum += (float)1/(2*i + 1);
    }

    printf("\nTong cua day la: %f", sum);

    return 0;
}
