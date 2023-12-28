#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào các giá trị của mảng và in ra các số nguyên tố
    int n;
    int i;
    do{
        printf("\nNhap vao so luong phan tu trong mang(0<n<=100): ");
        scanf("%d", &n);
    }
    while(n <= 0 || n > 100);

    int a[100];
    printf("\nNhap vao cac gia tri cua mang: \n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Xét các điều kiện của số nguyên tố và in ra:
    int tem = 0;
    int j;
    printf("\nCac so nguyen to trong mang la: \n");
    for(i = 0; i < n; i++){
        a[i];
        for(j = 2; j <= a[i]; j++){
            if(a[i] % j == 0){
                tem++;
                }
            }
        if(tem == 1){
                    printf("a[%d] = ", i);
                    printf("%d", a[i]);
                    printf("\n");
            }
            tem = 0;
        }




    return 0;
}
