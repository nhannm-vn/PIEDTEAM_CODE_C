#include <stdio.h>
#include <stdlib.h>
//Viết 1 chương trình nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và
//tổng 2 chữ số chia hết cho 2 thì kết thúc,
//còn không thì nhập lại đến chết ( 4p )
int main()
{
    int n = 0;
    char ch;
    while(1 == 1){
        do{
            printf("\nInput n: ");
            scanf("%d", &n);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10 || n <= 9){
                printf("\nInput again!");
                printf("\n");
            }
        }while(ch != 10 || n <= 9);

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
        int count = 0;
        int tmp = 0;
        while(n != 0){
            tmp = n % 10;
            count++;
            n /= 10;
        }
        if(count % 2 == 0 && flag == 1){
            return 0;
        }
    }



    return 0;
}
