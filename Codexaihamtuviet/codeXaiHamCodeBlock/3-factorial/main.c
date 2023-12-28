#include <stdio.h>
#include <stdlib.h>
//Ham tinh giai thua

void giaiThua(int n){
    int gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
    }
    printf("%d giai thua la: %d", n, gt);
}


int main()
{
    int n = 0;
    printf("\nInput giai thua can tinh: ");
    scanf("%d", &n);

    giaiThua(n);

    return 0;
}
