#include <stdio.h>
#include <stdlib.h>
/*21-primeProgram
1. viết 1 chương trình
    cho người dùng nhập vào 1 số nguyên đích thực
    kiểm tra xem số đó có phải số nguyên tố không.
    sau đó lại cho người dùng nhập vào 1 số nguyên
    đích thực,kiểm tra xem số đó có phải số nguyên
    tố không, rồi lại tiếp tục ...
    nếu em nhập vào 0 thì ngừng
*/
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
                printf("\nNhap lai di");
                printf("\n");
            }
        }while(ch != 10);
        if(n == 0)return 0;

        int isPrime = 1;
        if(n >= 2){
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("\nis prime");
            }else{
                printf("\nis not prime");
            }
        }else{
            printf("\nis not prime");
        }
        printf("\n");
    }

    return 0;
}
