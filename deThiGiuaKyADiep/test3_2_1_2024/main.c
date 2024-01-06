#include <stdio.h>
#include <stdlib.h>
/*
Hàm nhận vào n ( số nguyên xịn ), kiểm tra n có phải là số nguyên tố hay không ( 4p )
Lưu ý
printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
kết quả in ra theo form
+ printf(“\nLa so nguyen to”);
+ printf(“\nKhong phai so nguyen to”);
*/

int checkPrime(int n);

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
            printf("\nNhap lai di ");
        }
    }while(ch != 10);

    int result = checkPrime(n);
    if(result){
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong phai so nguyen to");
    }


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
