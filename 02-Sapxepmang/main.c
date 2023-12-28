#include <stdio.h>
#include <stdlib.h>

//Sắp xếp mảng từ nhỏ đến lớn và ngược lại
int main()
{
    //Nhập vào dãy số 1 đến n và in ra bằng mảng (0<n<=100)
    int i;
    int j=0;
    int n;
    do{
        printf("\nNhap vao so gia tri cua mang (0<n<=100): ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 100);

    //Nhập vào các giá trị lần lượt của mảng:
    int a[100];
    printf("\nNhap vao cac gia tri cua mang:\n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    //Đổi chéo giá trị của mảng:
    int yu = 0;
    for(i = 0; i < n/2; i++){
        yu = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = yu;
    }
    printf("\nMang sau khi dao la:\n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ",i);
        printf("%d", a[i]);
        printf("\n");
    }



    //Sắp xếp mảng từ nhỏ đến lớn:
    int ry = 0;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                ry = a[i];
                a[i] = a[j];
                a[j] = ry;
            }
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    for(i = 0; i < n; i++){
        printf("a[%d]= ", i);
        printf("%d", a[i]);
        printf("\n");
    }

    //Sắp xếp từ lớn đến nhỏ:
    int ty = 0;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            ty = a[i];
            a[i] = a[j];
            a[j] = ty;
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }




    return 0;
}
