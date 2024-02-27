#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào số nguyên n, biến đổi thành một số mới
//được ghép từ chữ số đầu tiên và cuối cùng
//123 13
//1   1
//15  15
int findLastElement(int n);
int findFirstElement(int n);
void transNumber(int *n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);
    transNumber(&n);
    printf("\nn la: %d", n);
    return 0;
}
void transNumber(int *n){
    if(*n > 9){
        *n = findFirstElement(*n) * 10 + findLastElement(*n);
    }else{
        *n = findFirstElement(*n);
    }
}
int findLastElement(int n){
    return n % 10;
}
int findFirstElement(int n){
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
