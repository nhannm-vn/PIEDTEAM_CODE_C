#include <stdio.h>
#include <stdlib.h>
//Bài tập tổng hợp:

int main()
{
    //Nhập vào dãy số 1 đến n và in ra bằng mảng (0<n<=100)
    int i;
    int j;
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

    //Xuất ra và tính tổng:
    printf("\nXuat ra cac gia tri cua mang:\n");
    for(i = 0; i < n; i++){
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }

    int tong = 0;
    for(i = 0; i < n; i++){
        tong = tong + a[i];
    }
    printf("\nTong cac gia tri trong mang la: %d", tong);

    //Tìm phan tử âm đầu tiên trong dãy:
    for(i = 0; i < n; i++){
        if(a[i] < 0){
            printf("\nPhan tu am dau tien trong day la: %d", a[i]);
            break;
        }
    }

    //Tính phân tử chẵn đàu tiên:
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("\nPhan tu chan dau tien la: %d", a[i]);
            break;
        }
    }

    //Phần tử lẻ cuối cùng:
    for(i = n; i > 0; i--){
        if(a[i] < 0){
            printf("\nPhan tu am cuoi cung la: %d", a[i]);
            break;
        }
    }

    //Đếm số phần tử chẵn có trong dãy:
    tong = 0;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            tong += 1;
        }
    }
    printf("\nTong cac so chan trong mang: %d", tong);

    //Tìm max trong dãy: gáng max=a[0] sau đó đem so sánh
    int max;
    max = a[0];
    int tmp = 0;
    for(i = 0; i < n; i++){
        if(max < a[i]){
            tmp = max;
            max = a[i];
            a[i] = tmp;
        }
    }
    printf("\nMax cua mang la: %d", max);

    //Tìm max2 trong mảng:
    int max2;
    tmp = 0;
    max2 = a[0];
    for(i = 0; i < n; i++){
        if(max2 < a[i] && max2 < max){
            tmp = a[i];
            a[i] = max2;
            max2 = tmp;
        }
    }
    printf("\nMax2 trong mang la: %d", max2);

   //Sắp xếp mảng từ bé đến lớn:
    /*int ry = 0;
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
        printf("a[%d] = ", i);
        printf("%d", a[i]);
        printf("\n");
    }
*/

     return 0;
}
