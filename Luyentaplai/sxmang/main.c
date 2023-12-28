#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap vao gia tri toi da cua mang: ");
    scanf("%d", &n);

    int a[100];

    printf("\nNhap vao cac gia tri cua mang: \n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int tem;
    //Sắp xếp theo thứ tự từ bé đến lớn:
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }

    printf("\nCac so nguyen to co trong mang la: \n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }



    return 0;
}
