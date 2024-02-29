#include <stdio.h>
#include <stdlib.h>
//checkFibonacci
int getFibonacci(int n);
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
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || n < 1);

    printf("\nso fibonacci tai %d la: %d", n, getFibonacci(n));
    return 0;
}
int getFibonacci(int n){
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
