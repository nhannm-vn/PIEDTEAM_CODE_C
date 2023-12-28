#include <stdio.h>
#include <stdlib.h>
//Nhập vào 2 số nguyên a b nếu tích của chúng là
//số chính phương thì dừng k thì lặp tới chết

int programSquare(void);

int main()
{
    int tmp = 0;
    tmp = programSquare();
    if(tmp == 0){
        return 0;
    }


    return 0;
}

int programSquare(void){
    while(1 == 1){
        int a = 0;
        int b = 0;
        char ch;
        char sh;
        do{
            printf("\nInput a: ");
            scanf("%d", &a);
            scanf("%c", &ch);
            fflush(stdin);
            if(ch != 10){
                printf("\nInput again");
            }
        }while(ch != 10);
        do{
            printf("\nInput b: ");
            scanf("%d", &b);
            scanf("%c", &sh);
            fflush(stdin);
            if(sh != 10){
                printf("\nInput again");
            }
        }while(sh != 10);

        int mul = a * b;

        if(sqrt(mul) == (int)sqrt(mul)){
            return 0;
        }
    }
}
