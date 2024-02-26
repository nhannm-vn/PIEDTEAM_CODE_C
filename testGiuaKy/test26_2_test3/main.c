#include <stdio.h>
#include <stdlib.h>
//nhập vào một số nguyên kiểm tra xem đó có phải snt không lặp đến khi nào nhập số 0
int main()
{
    int n = 0;
    char ch;

    while(1 == 1){
        do{
            printf("\nNhap vao n di: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nNhap lai di");
                printf("\n");
            }
        }while(ch != 10);
        if(n == 0)return 0;
        int isPrime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }
        }else{
            isPrime = 0;
        }
        if(isPrime == 1){
            printf("\n%d is prime", n);
        }else{
            printf("\n%d is not prime", n);

        }
        printf("\n");
    }


    return 0;
}
