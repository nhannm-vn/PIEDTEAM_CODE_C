#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nếu số đó là số nguyên tố
//đảo ngược nó cũng là số nguyên tố thì in ra
int checkPrime(int n);
int reverNumber(int n);
void checkNumber(int n);
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
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10);
    checkNumber(n);

    return 0;
}
void checkNumber(int n){
    int rever = reverNumber(n);
    int tmp = 0;
    if(checkPrime(n) == 1 && checkPrime(rever) == 1){
        printf("\nHop li");
    }else{
        printf("\nKhong hop li");
    }
}
int reverNumber(int n){
    int tmp = n;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    return m;
}
int checkPrime(int n){
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
