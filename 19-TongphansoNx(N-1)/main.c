#include <stdio.h>
#include <stdlib.h>

//Tính tổng phân số:
//1/1*2 + 1/2*3 +...+ 1/n*(n+1)

int main()
{
    int n;
    do{
        printf("\nNhap vao so n: ");
        scanf("%d", &n);
    }
    while(n < 1);

    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (float)1/(i*(i+1));
    }
    printf("\nGia tri tong la: %f", sum);


    return 0;
}
