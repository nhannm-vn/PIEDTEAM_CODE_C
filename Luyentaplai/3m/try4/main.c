#include <stdio.h>
#include <stdlib.h>
/*
Bài 4: số đảo ngược

Đầu vào: 123456. kết quả: 654321
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
            printf("\nAgain");
        }
    }while(ch != 10);

    int tmp = 0;
    printf("\nSo dao nguoc la: ");
    while(n != 0){
        tmp = n % 10;
        printf("%d", tmp);
        n /= 10;
    }










    return 0;
}
