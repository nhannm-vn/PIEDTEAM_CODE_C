#include <stdio.h>
#include <stdlib.h>
/*
Tinh tong: 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8 + 9 + 10-...-(n-2)-(n-1)+n+(n+1)
*/
int tinhDay(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di ");
        }
    }while(ch != 10);
    printf("\nTong day la: %d", tinhDay(n));

    return 0;
}
int tinhDay(int n){
    int result = 0;
    int count = 0;
    int sign = 1;
    for(int i = 1; i <= n; i++){
        result += i * sign;
        count++;
        if(count == 2){
            sign = -sign;
            count = 0;
        }
    }
    return result;
}
