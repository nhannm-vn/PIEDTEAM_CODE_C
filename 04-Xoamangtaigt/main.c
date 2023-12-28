#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào giá trị tối đa của mảng:
    int i;
    int n;
    int site;
    do{
        printf("\nNhap vao so gia tri cua n (0<n<=100): ");
        scanf("%d", &n);
    }
    while(n <= 0 || n > 100);

    int a[100];

    //Nhập vào số phần tử của mảng:
    printf("\nNhap vao so phan tu cua mang: \n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Xóa mảng tại giá trị
    int gt;
    printf("\nNhap vao gia tri can xoa: ");
    scanf("%d", &gt);

    int side;
    for(i = 0; i < n; i++){
        if(a[i] == gt){
            side = i;
            for(side; side < n - 1; side++){
                a[side] = a[side +1];
            }
        }
    }
    //In ra mảng sau khi xóa:
    for(i = 0; i < n - 1; i++){
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }



    return 0;
}
