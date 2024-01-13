#include <stdio.h>
#include <stdlib.h>
//Bài 2: Tính S(x, n) = x – x^2 + x^3 + … + (-1)^n+1 * x^n

int tinhGT(int x, int n);

int main()
{
    int n = 0;
    int x = 0;
    printf("\nNhap vao n: ");
    scanf("%d", &n);

    printf("\nNhap vao so x: ");
    scanf("%d", &x);

    printf("\n%d", tinhGT(x, n));
    return 0;
}
int tinhGT(int x, int n){
    int sum = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        sum += (pow(x, i) * sign);
        sign = -sign;
    }
    return sum;
}
