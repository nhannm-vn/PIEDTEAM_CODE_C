#include <stdio.h>
#include <stdlib.h>

/*
Nhập vào một con số nguyên dương và tính tổng các chữ số của nó
vs: 234 = 9
*/

int main()
{
    long int number;
    char ch;
    do{
        printf("\nMoi nhap vao mot so nguyen duong: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nKhong phu hop. Moi nhap lai nhe!!!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    int sum = 0;
    int tmp = 0;
    while(number != 0){
        tmp = number % 10;
        sum += tmp;
        number /= 10;
    }
    printf("\nTong cac chu so la: %d", sum);



    return 0;
}
