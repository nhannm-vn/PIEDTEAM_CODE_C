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
    int n = 0;
    char ch;
    do{
        printf("\nInput n di: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nSai roi. Moi nhap lai!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);
    //S=-1 + 2 - 3 + 4 -5 +.....+ (-1)^n*n
    int tmp = 0;
    int dem = 0;
    for(int i = 1; i <= n; i++){
        tmp = pow((-1),i) * i;
        printf("\nGt cua tmp = %d", tmp);
        dem += tmp;
    }
    printf("\nTong la: %d", dem);


    return 0;
}
