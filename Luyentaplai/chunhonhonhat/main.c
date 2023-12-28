#include <stdio.h>
#include <stdlib.h>
//Nhập vào một con số và in ra chữ số nhỏ nhất
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
            printf("\nMoi nhap lai!");
        }
    }while(ch != 10 || n < 0);

    if(n == 0){
        printf("\nChu so nho nhat la: 0");
        return 0;
    }

    int min = 9;
    int tmp = 0;
    while(n != 0){
        tmp = n % 10;
        if(tmp <= min){
            min = tmp;
        }
        n /= 10;
    }
    printf("\nChu so nho nhat: %d", min);


    return 0;
}
