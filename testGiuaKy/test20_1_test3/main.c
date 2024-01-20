#include <stdio.h>
#include <stdlib.h>
//Nhập và một số nguyên. Kiểm tra xem có là số đối xứng hay không
//vd: 121, 13431, 1331 1 13 133 1331
//Xài / % thử coi sau khi đảo ngược thì có là số đối xứng hay không
//121 = 0*10 + 1 = 1*10 + 2 = 12*10 + 1
int checkReverNumber(int n);
int reverseNumber(int n);
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
    if(checkReverNumber(n)){
        printf("\nLa so doi xung");
    }else{
        printf("\nKhong la so doi xung dau");
    }

    return 0;
}
int reverseNumber(int n){
    int tmp = n;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    return m;
}
int checkReverNumber(int n){
    if(reverseNumber(n) == n){
        return 1;
    }else{
        return 0;
    }
}
