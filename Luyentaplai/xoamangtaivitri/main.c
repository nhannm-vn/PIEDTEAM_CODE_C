#include <stdio.h>
#include <stdlib.h>
//Xóa gia trị trong mảng tại vị trí:

int main()
{
    int n;
    printf("\nNhap vao gia tri cua mang: ");
    scanf("%d", &n);

    int a[100];
    printf("\nNhap vao cac gia tri cua mang:\n");
    for(int i = 0; i < n; i++){
       printf("a[%d] = ", i);
       scanf("%d", &a[i]);
    }

    //Code xóa tại vị trí:
    int vitri;
    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &vitri);

    for(int i = vitri; i < n - 1; i++){
        a[i] = a[i + 1];
    }

    //In ra mảng mới:
    printf("\nMang moi sau khi in la:\n");
    for(int i = 0; i < n - 1; i++){
        printf("a[%d] = ",i);
        printf("%d", a[i]);
        printf("\n");
    }



    return 0;
}
