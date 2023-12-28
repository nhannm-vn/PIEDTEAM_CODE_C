#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nInput n: ");
    scanf("%d", &n);

    //Flag
    if(n >= 2){
        int key = 1;
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                key = 0;
                break;
            }
        }
        if(key){
                printf("\n%d is prime", n);
            }else{
                printf("\n%d is not prime", n);
            }
    }else{
        printf("%d is not prime");
    }

    return 0;
}
