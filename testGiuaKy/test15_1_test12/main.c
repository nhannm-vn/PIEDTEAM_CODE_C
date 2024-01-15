#include <stdio.h>
#include <stdlib.h>
//nhap start va end roi in ra cac so nguyen to
void printPrime(int start, int end);
int checkPrime(int n);
int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp =start;
        start = end;
        end = tmp;
    }
    printf("\nCac so nguyen to la: ");
    printPrime(start, end);
    return 0;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
void printPrime(int start, int end){
    for(int i = start; i <= end; i++){
        if(checkPrime(i)){
            printf("%d ", i);
        }
    }
}
