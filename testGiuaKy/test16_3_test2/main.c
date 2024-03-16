#include <stdio.h>
#include <stdlib.h>
//Nhập số nguyên n. Tính n!
//Vd nhập n=5 1*2*3*4*5
int factorial(int n);
int main()
{
    int n;
    printf("\nNhap vao n: ");
    scanf("%d", &n);

    int tmp = factorial(n);
    printf("\n%d", tmp);
    return 0;
}
int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
