#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap vao so can check: ");
    scanf("%d", &n);

    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                printf("\n%d is not prime", n);
                return 0;
            }
        }
        printf("\n%d is prime", n);
    }else{
        printf("\n%d is not prime", n);
    }

    return 0;
}
