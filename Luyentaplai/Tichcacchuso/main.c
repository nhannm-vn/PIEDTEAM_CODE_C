#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số nguyên chuẩn
//Tính tích các chữ số của nó:

int main()
{
    int number;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);//Xoa tan du buffer

    }while(ch != 10);

    int tmp = number;
    int tich = 1;
    do{
        tich *= (tmp % 10);
        tmp = tmp / 10;
    }while(tmp != 0);

    printf("\nTich cac chu so: %d", tich);

    return 0;
}
