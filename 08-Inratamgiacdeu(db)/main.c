#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lệnh continue là bỏ qua lệnh dưới quay lên trên
    //    *
    //   * *
    //  *   *
    // *     *
    //* * * * *
    int n;
    printf("\nNhap vao so hang cua tam giac: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        printf("*");
        for(int k = 2; k < 2*i - 1; k++){
            printf(" ");
        }
        if(i == 1){
            printf("\n");
            continue;
        }
        printf("*");

        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        printf("* ");
    }


    return 0;
}
