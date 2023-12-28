#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên duong n
//Tìm và in ra chữ số nhỏ nhất
int main()
{
    int number = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nMoi nhap lai!!!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    if(number == 0){
        printf("\nChu so nho nhat la: 0");
        return 0;
    }


    int min = 9;
    int tmp = 0;//1 0 9 7
    while(number != 0){
        tmp = number % 10;
        if(tmp <= min){
            min = tmp;
        }
        number /= 10;
    }
    printf("\nChu so nho nhat la: %d", min);

    return 0;
}
