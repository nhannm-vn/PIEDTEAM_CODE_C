#include <stdio.h>
#include <stdlib.h>
/*
Bài 2: Nhập vào n nguyên dương, tính và in kết quả của dãy phép tính sau đây.
S=-1 + 2 - 3 + 4 -5 +.....+ (-1)^n*n
//
Test case với n = 5:

Đầu vào: n = 5 . Kết quả: Tổng của dãy là -3
Đầu vào: n = 10. Kết quả: Tổng của dãy là 5


*/
int main()
{
    int n;
    char ch;

    do{
        printf("\nInput so nguyen n(n>0): ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(n < 0 || ch != 10){
            printf("\nSai roi. Xin hay nhap lai!!!");
            printf("\n");
        }
    }while(n < 0 || ch != 10);

    //(-1)^n*n

    int sum = 0;
    int tmp = 0;
    for(int i = 1; i <= n; i++){
        tmp = pow((-1), i) * i;
        printf("%d ", tmp);
        sum += tmp;
    }

    printf("\nGia tri cua bieu thuc la: %d", sum);


    return 0;
}
