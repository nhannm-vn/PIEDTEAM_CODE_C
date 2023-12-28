#include <stdio.h>
#include <stdlib.h>
//22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nMoi nhap vao so n >= 1: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nSai roi. Moi cau nhap lai ne!");\
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    float sum = 0;
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        tmp += i;
        sum += (float)1 / tmp;
    }

    printf("\nKet qua la: %.2f", sum);

    return 0;
}
