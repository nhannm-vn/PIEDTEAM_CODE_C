#include <stdio.h>
#include <stdlib.h>
/*
6.Viết hàm nhận vào một số thực, trả ra 1 nếu đảo
ngược phần dư của nó là số nguyên tố, và 0 nếu k phải.
vd: 4.13 => 1
vd: 8.91 => 1
vd: 12.32=> 1
vd: 10.23 => 0
vd: 11.43 => 0
*/
int checkDu(int du);
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

    printf("\n%d", checkDu(du));
    return 0;
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
int checkDu(int du){
    int tmp = reverNumber(du);
    if(tmp >= 2){
        for(int i = 2; i <= tmp - 1; i++){
            if(tmp % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
