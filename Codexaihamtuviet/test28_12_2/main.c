#include <stdio.h>
#include <stdlib.h>
/*
- Viết hàm nhận vào số có 2 chữ số, nếu số đó là số nguyên tố và tổng 2 chữ số chia hết cho 2
Có đầu ra là true hoặc false, nếu true thì in ra đúng rồi, false thì sai rồi ( 4p )

*/

int checkNumber(int number);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 10 || n > 99){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10 || n < 10 || n > 99);

    if(checkNumber(n)){
        printf("\nDung roi");
    }else{
        printf("\nSai roi");
    }

}
int checkNumber(int number){
    int isPrime = 1;

    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            int rye = 0;
            int count = 0;
            int tmp = number;
            while(tmp != 0){
                rye = tmp % 10;
                count += tmp;
                tmp /= 10;
            }
            if(count % 2 == 0){
                return 1;
            }else{
                return 0;
            }
        }
    }
    return 0;
}


