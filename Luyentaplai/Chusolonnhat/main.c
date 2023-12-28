#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số và in ra chữ số lớn nhất của nó:

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    int max = 0;
    int tmp = number;
    int rye = 0;
    do{
        rye = tmp % 10;
        if(rye >= max){
            max = rye;
        }

    }while(tmp /= 10);

    printf("\nMax la: %d", max);


    return 0;
}
