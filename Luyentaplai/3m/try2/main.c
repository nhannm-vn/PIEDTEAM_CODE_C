#include <stdio.h>
#include <stdlib.h>
/*
Bài 2: Nhập vào n nguyên dương, tính và in kết quả của dãy phép tính sau đây.
S=-1 + 2 - 3 + 4 -5 +.....+ (-1)^n * n

Đầu vào: n = 5 . Kết quả: Tổng của dãy là -3

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
        if(ch != 10 || n < 0){
            printf("\nAGAIN");
        }
    }while(ch != 10 || n <0);
    int sum = 0;
    for(int  i = 1; i <= n; i++){
        sum += pow(-1, i) *  i;
    }
    printf("\nGia tri : %d", sum);

    return 0;
}
