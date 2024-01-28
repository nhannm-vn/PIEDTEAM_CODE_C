#include <stdio.h>
#include <stdlib.h>
//Tinh day 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8
int inductiveATan(int n);
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
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    printf("\nTong la: %d", inductiveATan(n));
    return 0;
}
int inductiveATan(int n){
    int sum = 0;
    int sign = 1;
    int count = 0;
    for(int i = 1; i <= n; i++){
        sum += i * sign;
        count++;
        if(count == 2){
            sign = -sign;
            count = 0;
        }
    }
    return sum;
}
