#include <stdio.h>
#include <stdlib.h>
//•	Nhập vào một số nguyên dương n, in ra số fibonacci thứ n trong dãy ( 3p )
void getFibonacci(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n > 0: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nNhap lai di: ");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    getFibonacci(n);
    return 0;
}
void getFibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    printf("%d", result);
}
