#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm xin người dùng n ( số nguyên xịn ),  in ra màn hình các số lẽ trong khoảng
từ 1 đến n ( Loại 3 có Vào 0 Ra ) ( 4p )
Lưu ý
printf trước khi scanf phải in ra là “Nhap so n: ”
+ printf(“\nNhap so n: ”);
+ scanf(“%d”, &n);
kết quả in ra theo form
printf(“\n%d, num”);
Vd: n = 10
In ra:
1
3
5
7
9
*/

void printOdd(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap so n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
        }
    }while(ch != 10);

    printOdd(n);

    return 0;
}

void printOdd(int n){
    for(int num = 1; num <= n; num++){
        if(num % 2 != 0){
            printf("\n%d", num);
        }
    }
}
