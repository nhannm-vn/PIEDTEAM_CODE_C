#include <stdio.h>
#include <stdlib.h>
/*
in ra so dao nguoc 12345 54321
*/

int reverseNumber(void);

int main()
{
    int tmp = reverseNumber();
    printf("So dao nguoc la: %d", tmp);

    return 0;
}

int reverseNumber(void){
    int number  = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nInput again!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    int m = 0;
    int rye = 0;
    int tmp = number;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    return m;
}
