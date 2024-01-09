#include <stdio.h>
#include <stdlib.h>
/*
•	11.Viết hàm nhận vào một số thực,
trả ra 1 nếu đảo ngược phần dư của nó là số nguyên tố, và 0 nếu k phải. ( 5p )
*/

int checkPrimeDu(int du);

int main()
{
    int n = 0;
    char ch;
    int du = 0;
    printf("\nNhap so thuc: ");
    scanf("%d", &n);
    scanf("%c", &ch);
    scanf("%d", &du);

    printf("\n%d", checkPrimeDu(du));

    return 0;
}
int checkPrimeDu(int du){
    int tmp = du;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye =  tmp % 10;
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
