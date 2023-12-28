#include <stdio.h>
#include <stdlib.h>

int main()
{
    //* * * * *
    //  * * * *
    //    * * *
    //      * *
    //        *
    //*
    //* *
    //* * *
    //* * * *
    //* * * * *

    //TamGiac1:
    int n;
    printf("\nNhap vao max sao cua mot canh: ");
    scanf("%d", &n);

    for(int i = 0; i <= n - 1; i++){
        for(int j = 1; j <= 2*i; j++){
            printf(" ");
        }
        for(int k = n; k > i; k--){
            printf("* ");
        }
        printf("\n");
    }

    //TamGiac2:
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }



    return 0;
}
