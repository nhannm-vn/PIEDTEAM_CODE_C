#include <stdio.h>
#include <stdlib.h>
//Nhập vào một mảng xong đó xóa phần tử tại vị trí:
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

    //Xóa tại một vị trí trong mảng:
    // 3 4 6 7 8   3 4 7 8
    // 0 1 2 3 4   0 1 2 3

    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &site);

    for(site; site < n - 1; site++){
        a[site] = a[site + 1];
    }
    //In ra mảng sau khi xóa:
    printf("\nMang sau khi xoa la: \n");
    for(i = 0; i < n - 1; i++){
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }




    return 0;
}
