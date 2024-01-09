#include <stdio.h>
#include <stdlib.h>
//Prime Program
int main()
{
    int n = 0;
    char ch;

    while(1 == 1){
        do{
            printf("\nNhap so n: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nNhap lai di");
            }
        }while(ch != 10);

        if(n == 0) return 0;

        int isPrime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("\n%d is prime", n);
            }else{
                printf("\n%d is not prime", n);
            }
        }else{
            printf("\n%d is not prime", n);
        }
        printf("\n");
    }



    return 0;
}
