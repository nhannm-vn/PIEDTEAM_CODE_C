#include <stdio.h>
#include <stdlib.h>
/*Nhập vào một số nguyên n
xuất ra màn hình kết quả của
1^n + 2^n + 3^n +...+ n^n
vd: ta nhập n=5
thì phải in ra 1^5 + 2^5 + 3^5 +...+5^5
*/
int main()
{
    int n;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai!!!");
            printf("\n");
        }
        printf("\n");
    }while(ch != 10 || n < 0);

    //1^n + 2^n + 3^n +...+ n^n
    long int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + pow(i,n);
    }

    printf("\nKet qua la: %d", sum);

    return 0;
}
