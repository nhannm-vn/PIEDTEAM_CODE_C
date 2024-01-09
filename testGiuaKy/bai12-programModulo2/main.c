#include <stdio.h>
#include <stdlib.h>
/*
•	Viết 1 chương trình nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và
tổng 2 chữ số chia
hết cho 2 thì kết thúc, còn không thì nhập lại đến chết ( 4p )
*/
int main()
{
    int n = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nNhap n: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10 || n < 10 || n > 99){
                printf("\nNhap lai di");
            }
        }while(ch != 10 || n < 10 || n > 99);
        int flag = 0;
        int isPrime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                flag = 1;
            }
        }
        int tmp = n;
        int rye = 0;
        int count = 0;
        while(tmp != 0){
            rye = tmp % 10;
            count += rye;
            tmp /= 10;
        }
        if(flag == 1 && count % 2 == 0) return;
    }


    return 0;
}
