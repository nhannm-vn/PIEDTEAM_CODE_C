#include <stdio.h>
#include <stdlib.h>
//checkPrimeV2

void checkPrimeV2(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    checkPrimeV2(n);

    return 0;
}
void checkPrimeV2(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                printf("\n%d khong la so nguyen to", n);
                return ;
            }
        }
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong la so nguyen to", n);
    }
}
