#include <stdio.h>
#include <stdlib.h>
/*
1. Viết hàm nhận vào 1 số nguyên n, kiểm tra xem số đó có phải số nguyên tố hay không?
Nếu có thì return 1, nếu k phải thì return 0
*/
int checkPrime(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    int result =  checkPrime(n);
    printf("\n%d", result);
    return 0;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
