#include <stdio.h>
#include <stdlib.h>
/*
Cho người dùng nhập vào một số nguyên n.
Nếu trong phần tử của số đó có số là số chính phương và
chia hết cho 3 thì in ra màn hình số n
*/

int loopSquare(int number);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    int tmp = loopSquare(n);
    printf("\n%d", tmp);


    return 0;
}

int loopSquare(int number){
    int tmp = number;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        if(rye % 3 == 0 && sqrt(rye) == (int)sqrt(rye)){
            return number;
        }
        tmp /= 10;
    }
}
