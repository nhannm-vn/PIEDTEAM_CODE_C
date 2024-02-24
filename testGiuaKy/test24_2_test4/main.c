#include <stdio.h>
#include <stdlib.h>
int findFibonacci(int n);
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
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10);
    int result = findFibonacci(n);
    printf("\n%d", result);
    return 0;
}
int findFibonacci(int n){
    if(n <= 0){
        return -1;
    }
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
