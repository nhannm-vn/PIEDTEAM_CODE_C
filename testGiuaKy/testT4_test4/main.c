#include <stdio.h>
#include <stdlib.h>
int printFibonacci(int n);
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
    printf("\n%d", printFibonacci(n));
    return 0;
}
int printFibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    if(n <= 0){
        return -1;
    }else{
        for(int i = 1; i <= n - 1; i++){
            result = prev + curr;
            prev = curr;
            curr = result;
        }
    }
    return result;
}
