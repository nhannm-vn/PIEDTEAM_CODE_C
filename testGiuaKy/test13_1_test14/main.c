#include <stdio.h>
#include <stdlib.h>
//Chương trình kiểm tra số nguyên tố. Nhập 0 thì dừng

void primeProgram();

int main()
{
    primeProgram();

    return 0;
}
void primeProgram(){
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
                printf("\n");
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
                printf("\nLa so nguyen to");
            }else{
                printf("\nKhong phai so nguyen to dau");
            }
        }else{
            printf("\nKhong phai so nguyen to dau");
        }
        printf("\n");
    }
}
