#include <stdio.h>
#include <stdlib.h>
/*
Tinh tong: 1 + 2 - 3 - 4 + 5 + 6 - 7 - 8 + 9 + 10-...-(n-2)-(n-1)+n+(n+1)
*/

int sumDay(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
        }
    }while(ch != 10);

    int tmp = sumDay(n);
    printf("\nTong la: %d", tmp);


    return 0;
}

int sumDay(int n){
    int sum = 0;
    int signEven = 1;
    int signOdd = 1;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i * signEven;
            signEven = -signEven;
        }else{
            sum += i * signOdd;
            signOdd = -signOdd;
        }
    }
    return sum;
}
