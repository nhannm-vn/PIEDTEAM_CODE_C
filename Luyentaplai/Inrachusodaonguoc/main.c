#include <stdio.h>
#include <stdlib.h>

//Ví dụ:
//123 in ra 321

int main()
{
    int number;
    printf("\nInput number: ");
    scanf("%d", &number);

    printf("\nSo dao nguoc la: ");
    int tmp = number;
    int rye = 0;
    do{
        rye = tmp % 10;
        printf("%d", rye);
        tmp /= 10;
    }while(tmp != 0);

    return 0;
}
