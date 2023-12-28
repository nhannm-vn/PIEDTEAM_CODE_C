#include <stdio.h>
#include <stdlib.h>
/*
Bài 4: số đảo ngược

Đầu vào: 123456. kết quả: 654321
*/
int main()
{
    int n;
    char ch;
    do{
        printf("\nMoi nhap so di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nSai roi!!!");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    int tmp = 0;
    printf("\nSo ban dau: %d\nSo dao nguoc: ", n);
    while(n != 0){
        tmp = n % 10;
        printf("%d", tmp);
        n /= 10;
    }

    return 0;
}
