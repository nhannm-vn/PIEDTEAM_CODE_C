#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap vao so can kiem tra: ");
    scanf("%d", &n);

    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0){
            printf("\n%d is not prime", n);
            return 0;
        }
    }
    printf("\n%d is prime", n);

    return 0;
}
