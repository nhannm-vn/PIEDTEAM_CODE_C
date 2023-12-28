#include <stdio.h>
#include <stdlib.h>

int main()
{
    //In ra bảng cửu chương từ 1 đến 10

    for(int i = 1; i <= 10; i++){
        printf("Bang cuu chuong cua %d la: \n", i);
        for(int j = 1; j <= 10; j++){
            printf("\n%d x %d = %d\n", i, j, i*j);
        }
    }



    return 0;
}
