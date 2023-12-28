#include <stdio.h>
#include <stdlib.h>
//Fibonacci

int fibonacii(int n);

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

    int tmp = fibonacii(n);
    printf("\nTai vi tri %d thi co gia tri la: %d", n, tmp);


    return 0;
}

int fibonacii(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
