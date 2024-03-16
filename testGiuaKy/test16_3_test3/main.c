#include <stdio.h>
#include <stdlib.h>
//fibonacci
int getFibonacci(int n);
int main()
{
    int n = 0;
    printf("\nInput vi tri: ");
    scanf("%d", &n);

    int tmp = getFibonacci(n);
    printf("\n%d", tmp);
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
