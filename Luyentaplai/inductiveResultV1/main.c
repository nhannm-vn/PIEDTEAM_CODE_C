#include <stdio.h>
#include <stdlib.h>

/*Nhập vào một số nguyên duong n
xuất ra màn hình kết quả của
1^n + 2^n + 3^n +...+ n^n
vd: ta nhập n=5
thì phải in ra 1^5 + 2^5 + 3^5 +...+5^5
*/
int main()
{
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(i,n);
    }

    printf("\nTong la: %d", sum);

    return 0;
}
