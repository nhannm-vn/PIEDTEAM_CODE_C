#include <stdio.h>
#include <stdlib.h>
/*
Bài 1: Nhập vào (n nguyên dương). Đếm số lượng chữ số của n là số nguyên tố.

Ví dụ
Đầu vào: 1222333999888 .Kết quả: 6

*/

int main()
{
    long int n;
    char ch;

    do{
        printf("\nInput n(n>0): ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap sai roi. Moi nhap lai di!!!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int rye = 0;
    int sum = 0;


    while(n != 0){
        rye = n % 10;//Tách các chữ số ra
        int isPrime = 1;
        if(rye >= 2){
            for(int i = 2; i <= rye - 1; i++){
                if(rye % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                sum += 1;
            }
        }
        n = n / 10;
    }
    printf("Ket qua %d so nguyen to", sum);

    return 0;
}
