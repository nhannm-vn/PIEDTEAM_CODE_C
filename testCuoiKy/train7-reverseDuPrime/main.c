#include <stdio.h>
#include <stdlib.h>
//•	Viết hàm nhận vào một số thực, trả ra 1 nếu
//đảo ngược phần dư của nó là số nguyên tố, và 0 nếu k phải
int checkReverDu(int du);
int checkPrime(int n);
int reverNumber(int n);
int main()
{
    int n = 0;
    int du = 0;
    char ch;
    printf("\nNhap vao mot so thuc: ");
    scanf("%d", &n);
    scanf("%c", &ch);
    scanf("%d", &du);
    fflush(stdin);

    printf("%d", checkReverDu(du));
    return 0;
}
int checkReverDu(int du){
    int rye = reverNumber(du);
    if(checkPrime(rye)){
        return 1;
    }else{
        return 0;
    }
}
int reverNumber(int n){
    int tmp = n;
    int m = 0;
    int rye = 0;
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
