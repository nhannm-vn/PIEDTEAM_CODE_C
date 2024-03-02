#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhận vào 1 số nguyên n, kiểm tra xem số đó có phải là số nguyên tố hay không ( 5p )
nếu là số nguyên tố thì biến đổi số đó thành 'n0'
vd: 11 -> 110
nếu không phải số nguyên tố thì biến đổi số đó thành n = n /2
vd: 12 -> 6
*/
int checkPrime(int n);
void transNumber(int *n);
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
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    transNumber(&n);
    printf("\nn la: %d", n);
    return 0;
}
void transNumber(int *n){
    if(checkPrime(*n) == 1){
        *n *= 10;
    }else{
        *n /= 2;
    }
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
