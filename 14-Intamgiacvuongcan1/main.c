#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In ra tam giác vuông cân:
    //* * * * *
    //  * * * *
    //    * * *
    //      * *
    //        *

    int n;
    printf("\nNhap vao so sao toi da mot canh: ");// bang voi so dong
    scanf("%d", &n);

    for(int i = 0; i <= n - 1; i++){//Số sao tối đa = số hàng
        for(int k = 1; k <= 2*i; k++){
            printf(" ");
        }
        for(int j = n; j > i; j--){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
