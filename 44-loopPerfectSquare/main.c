#include <stdio.h>
#include <stdlib.h>
/*
Cho người dùng nhập vào một số nguyên n.
Nếu trong phần tử của số đó có số là số chính phương và
chia hết cho 3 thì in ra màn hình số n
*/
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    int tmp = n;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        if(sqrt(rye) == (int)sqrt(rye) && rye % 3 == 0){
            printf("%d", n);
            return 0;//Nếu không có sẽ bị trường hợp có cả số 0 và 9 sẽ in ra cả 2 dòng n
        }
        tmp /= 10;
    }


    return 0;
}
