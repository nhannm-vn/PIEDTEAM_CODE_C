#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In ra tam giác đều
    /*    *
         * *
        * * *
       * * * *
      * * * * *
    */
    int n;
    printf("\nNhap vao so sao toi da: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
       for(int j = i; j <= n - 1; j++){
        printf(" ");
       }
       for(int k = 1; k <= i; k++){
        printf("* ");
       }
       printf("\n");
    }



    return 0;
}
