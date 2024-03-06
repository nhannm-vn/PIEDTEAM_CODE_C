#include <stdio.h>
#include <stdlib.h>

int main()
{
    //in ra tam giac:
    //* * * * *
    // * * * *
    //  * * *
    //   * *
    //    *

    int n;
    printf("\nNhap vao so sao toi da cua canh: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int k = i; k <= n; k++){
            printf("* ");

        }
        printf("\n");
    }



    return 0;
}
