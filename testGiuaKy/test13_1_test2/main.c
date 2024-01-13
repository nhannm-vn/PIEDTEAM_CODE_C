#include <stdio.h>
#include <stdlib.h>
//2.Nhập vào một số nguyên dương n, in ra số fibonacci thứ n trong dãy

void printFibonacci(void);

int main()
{
    printFibonacci();

    return 0;
}
void printFibonacci(void){
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di");
        }
    }while(ch != 10 || n < 0);
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("\n%d", result);
}
