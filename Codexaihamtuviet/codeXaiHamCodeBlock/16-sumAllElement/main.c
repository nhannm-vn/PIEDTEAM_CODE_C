#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên dương n đàng hoàng
//Tính tổng các đơn vị số của n
//vd: 1234
//result = 10
//vd: 3254
//result = 14
//Hãy dùng \ và % 10

int sumAllElement(void);

int main()
{
    int tmp = sumAllElement();

    printf("\nTong cac chu so la: %d", tmp);

    return 0;
}

int sumAllElement(void){
    int number  = 0;
    char ch;
    do{
        printf("\nInput number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nInput again");
        }
    }while(ch != 10 || number < 0);

    int tmp = number;
    int sum = 0;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
