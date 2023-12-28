#include <stdio.h>
#include <stdlib.h>
/*Bài 3: Tính tổng dãy số sau

Đầu vào: n = 1. Kết quả i: Tổng của dãy là -0.666667

Đầu vào: n = 3
Kết quả: Tổng của dãy là -0.723801

Đầu vào: n = 4
Kết quả: Tổng của dãy là 0.165079
*/
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n:");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nAgain");
        }
    }while(ch != 10 || n < 1);

    float sum = 0;
    for(int i = 1;  i <= n; i++){
        sum += pow(-1, i) * (2 * i) / ( 2 * i + 1);
    }
    printf("\nTong la %f", sum);











    return 0;
}
