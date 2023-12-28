#include <stdio.h>
#include <stdlib.h>

//Nhập vào số mũ n
//Hãy tính giá trị của 1^n + 2^n + 3^n +...+n^n
int main()
{
    int n;
    printf("\nNhap vao so mu n: ");
    scanf("%d", &n);

    int gt = 0;
    for(int i = 1; i <= n; i++){
        gt += pow(i,n);
        printf("%d^%d", i, n);
        if(i < n){
            printf(" + ");
        }
    }

    printf(" = %d", gt);

    return 0;
}
