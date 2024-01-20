#include <stdio.h>
#include <stdlib.h>
//nhập vào một số nguyen kiêm tra xem đó có phải là số
//nguyên tố hay không kiểm tra tới khi nào nhập vào số 0
int main()
{
    int n = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nNhap vao n: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nNhap lai di ne");
                printf("\n");
            }
        }while(ch != 10);
        if(n == 0) return 0;
        int isPrime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                }
            }
            if(isPrime){
                printf("\nLa so nguyen to");
            }else{
                printf("\nKhong la so nguyen to dau");
            }
        }else{
            printf("\nKhong la so nguyen to dau");
        }
        printf("\n");
    }

    return 0;
}
