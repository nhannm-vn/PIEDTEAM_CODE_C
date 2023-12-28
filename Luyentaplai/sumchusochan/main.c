#include <stdio.h>
#include <stdlib.h>

//Nhập vào một số bất kì nguyên dương
//Tính sum các chữ số chẵn của nó:

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    int tmp = number;
    int rye = 0;
    int sum = 0;
    do{
        rye = tmp % 10;
        if(rye % 2 == 0){
            sum += rye;
        }
        tmp /= 10;
    }while(tmp != 0);

    printf("\nSum cac chu so chan la: %d", sum);


    return 0;
}
