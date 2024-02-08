#include <stdio.h>
#include <stdlib.h>
/*
Tinh tong: 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8 + 9 + 10-...-(n-2)-(n-1)+n+(n+1)
*/
int inductiveAtan(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    printf("\nTong la he: %d", inductiveAtan(n));
    return 0;
}
int inductiveAtan(int n){
    int sum = 0;
    int count = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        sum += i*sign;
        count++;
        if(count == 2){
            count = 0;
            sign = -sign;
        }
    }
    return sum;
}
