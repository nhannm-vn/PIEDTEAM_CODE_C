#include <stdio.h>
#include <stdlib.h>
void newNumber(int *n);
int findLastNumber(int n);
int findFirstNumber(int n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    newNumber(&n);
    printf("\nn = %d", n);
    return 0;
}
void newNumber(int *n){
    if(*n < 10){
        *n = findFirstNumber(*n);
    }else{
        *n = findFirstNumber(*n) * 10 + findLastNumber(*n);
    }
}
int findFirstNumber(int n){
    int tmp = n;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            return rye;
        }
    }
}
int findLastNumber(int n){
    return n % 10;
}
