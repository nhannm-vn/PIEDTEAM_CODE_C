#include <stdio.h>
#include <stdlib.h>

//checkPrimeV3

int checkPrimeV3();

int main()
{
    if(checkPrimeV3()){
        printf("\nis Prime");
    }else{
        printf("\nis not Prime");
    }

    return 0;
}

int checkPrimeV3(){
    int n = 0;
    printf("\nInput n: ");
    scanf("%d", &n);

    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
