#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Tính tổng của dãy số từ 1+2+3+...+n
    //Tính tổng của dãy số từ 1/1+1/2+1/3+...+1/n

    //Tính tổng của dãy số từ 1+2+3+...+n
    int n;

    printf("\nNhap vao day so tu 1 den ");
    scanf("%d",&n);

    float count = 0;
    int i;
    printf("\nTong gia tri cua day tu 1 den %d la: ", n);
    for(i = 1; i <= n; i++){
        count = count + i;
    }

    printf("%.f", count);

    //Tính tổng của dãy số từ 1/1+1/2+1/3+...+1/n
    count = 0;
    for(i = 1; i <= n; i++){
        count = count + (float)1/i;
    }
    printf("\nTong gia tri cua day: %.2f", count);


    return 0;
}
