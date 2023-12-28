#include <stdio.h>
#include <stdlib.h>

//Nhập vào số nguyên n
//Tìm chữ số đầu tiên của nó

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    int rye = 0;
    int tmp = number;
    do{
        rye = tmp % 10;
        if(tmp < 10){
            printf("\nChu so dau tien la: %d", rye);
        }
        tmp /= 10;
    }while(tmp != 0);


    return 0;
}
