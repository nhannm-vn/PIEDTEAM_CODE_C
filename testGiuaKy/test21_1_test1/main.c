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
int checkPrimeDu(int du);
int main()
{
    float n = 0;
    int du = 0;
    char ch;
    printf("\nNhap vao so thuc: ");
    scanf("%d", &n);
    scanf("%c", &ch);
    scanf("%d", &du);
    fflush(stdin);

    printf("\n%d", checkPrimeDu(du));
    return 0;
}
int checkPrimeDu(int du){
    int tmp = du;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    if(m >= 2){
        for(int i = 2; i <= m - 1; i++){
            if(m % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
