#include <stdio.h>
#include <stdlib.h>

//Nhập vào các giá trị của mảng
//In ra các số nguyên tố

int main()
{
    int n;
    int i;

    do{
        printf("Nhap vao so gia tri cua mang: ");
        scanf("%d", &n);
    }
    while(n > 100 || n <= 0);

    int a[100];

    //Nhập vào các giá trị của mảng:
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int j;
    int dem = 0;

    //Kiểm tra số nguyên tố:
    //Phương pháp cấm cờ
    printf("\nDay so nguyen to la: \n");
    for(i = 0; i < n; i++){
        for(j = 2; j <= a[i]; j++){
            if(a[i] % j == 0){
                dem++;
            }
        }
        if(dem == 1){
            printf("a[%d] = ", i);
            printf("%d ",a[i]);
            printf("\n");
        }
        dem = 0;
    }

    //Phương pháp cấm cờ:



    return 0;
}
