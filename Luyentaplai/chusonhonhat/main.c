#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số
//Tìm chữ số nhỏ nhất của nó

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    int tmp = number;
    int rye = 0;
    int min = 9;

    do{
        rye = tmp % 10;
        if(rye <= min){
            min = rye;
        }

    }while(tmp /= 10);

    printf("\nChu so nho nhat la: %d", min);


    return 0;
}
