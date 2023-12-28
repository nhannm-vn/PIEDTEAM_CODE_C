#include <stdio.h>
#include <stdlib.h>

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

    //Xóa mảng tại giá trị:
    int gt;
    printf("\nNhap vao gia tri can xoa: ");
    scanf("%d", &gt);


    for(int i = 0; i < n; i++){
        if(a[i] == gt){
           int side = i;
           for(side; side < n - 1; side++){
            a[side] = a[side + 1];
           }
        }
    }

    //In ra giá trị sau khi xóa:
    printf("\nIn ra gia  tri cua mang sau khi xoa:\n");
    for(int i = 0; i < n - 1; i++){
        printf("a[%d] = ",i);
        printf("%d", a[i]);
        printf("\n");
    }



    return 0;
}
