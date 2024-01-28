#include <stdio.h>
#include <stdlib.h>
//in ra tam giac floyD
int main()
{
    int n = 0;
    printf("\nNhap vao chieu cao: ");
    scanf("%d", &n);
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            count++;
            printf("%d ", count);
        }
        printf("\n");
    }

    return 0;
}
