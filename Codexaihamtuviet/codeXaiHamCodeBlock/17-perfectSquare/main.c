#include <stdio.h>
#include <stdlib.h>
//Số chính phương là số nếu
// căn 2 của một số được số nguyên thì đó là số chính phương

//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không

void checkSquare(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    checkSquare(n);

    return 0;
}

void checkSquare(int n){
    if(sqrt(n) == (int)sqrt(n)){
        printf("\nLa so chinh phuong");
    }else{
        printf("\nKhong la so chinh phuong dau");
    }
}
