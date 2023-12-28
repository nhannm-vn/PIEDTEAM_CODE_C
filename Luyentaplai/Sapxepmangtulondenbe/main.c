#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào các giá trị của mảng và sắp xếp từ lớn đến bé:
    int n;
    printf("Nhap vao gia tri cua mang: ");
    scanf("%d", &n);

    int a[100];

    printf("\nNhap vao cac gia tri cua mang\n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Sắp xếp mảng từ lớn về bé:
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("\nSap xep mang la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);

    }


    return 0;
}
