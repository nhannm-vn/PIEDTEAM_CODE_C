#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không

int checkPerfectSquare(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nNhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    if(checkPerfectSquare(n)){
        printf("\nLa so chinh phuong");
    }else{
        printf("\nKhong la so chinh phuong");
    }
    return 0;
}
int checkPerfectSquare(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return 0;
    }
}
