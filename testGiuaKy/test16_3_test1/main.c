#include <stdio.h>
#include <stdlib.h>
/*Nhập vào một số nguyên n
xuất ra màn hình kết quả của
1^n + 2^n + 3^n +...+ n^n
vd: ta nhập n=5
thì phải in ra 1^5 + 2^5 + 3^5 +...+5^5
*/
int inductiveResult(int n);
int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    int result = inductiveResult(n);
    printf("\nket qua: %d", result);
    return 0;
}
int inductiveResult(int n){
    int sum = 0;
    int i = 0;
    for(i = 1; i <= n; i++){
        sum += pow(i, n);
    }
    return sum;
}
