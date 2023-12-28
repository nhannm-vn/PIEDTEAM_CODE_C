#include <stdio.h>
#include <stdlib.h>
//Nhập vào mảng gồm n phân tử:
//In ra các số nguyên tố từ mảng

int main()
{
    int n;

    do{
        printf("\nNhap vao so phan tu n cua mang: ");
        scanf("%d", &n);
    }while(n <= 0 || n > 100);

    int a[100];
    //Input phantu cua mang:
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Check Prime
    printf("\nCac so nguyen to co trong mang la:\n");
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 2; j < a[i]; j++){
            if(a[i] % j == 0){
                count++;
            }
        }
        if(count == 0){
            printf("%d ", a[i]);
        }
        count = 0;
    }



    return 0;
}
