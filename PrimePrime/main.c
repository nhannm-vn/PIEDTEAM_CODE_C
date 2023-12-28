#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập từ mảng vào các số lần luợt. Sau đó in ra số nguyên tố:
    int n;
    printf("\nNhap vao so luong toi da cua mang: ");
    scanf("%d", &n);

    int a[100];
    for(int i = 0; i < n; i++){
        do{
         printf("a[%d] = ", i);
         scanf("%d", &a[i]);
        }
        while(a[i] < 2);
    }

    printf("\nCac so nguyen to trong mang la: ");
    for(int i = 0; i < n; i++){
        int key = 1;
        for(int j = 2; j <= a[i] - 1; j++){
            if(a[i] % j == 0){
                key = 0;
                break;
            }
        }
        if(key == 1){
            printf("%d ", a[i]);
        }
    }



    return 0;
}
