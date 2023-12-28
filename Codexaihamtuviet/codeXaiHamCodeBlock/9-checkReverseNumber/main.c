#include <stdio.h>
#include <stdlib.h>
//Nhập và một số nguyên. Kiểm tra xem có là số đối xứng hay không
//vd: 121, 13431, 1331 1 13 133 1331
//Xài / % thử coi sau khi đảo ngược thì có là số đối xứng hay không
//121 = 0*10 + 1 = 1*10 + 2 = 12*10 + 1

void checkReverseNumber(int number);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10);

    checkReverseNumber(n);

    return 0;
}

void checkReverseNumber(int number){
    int rye  = 0;
    int tmp = number;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    if(m == number){
        printf("\nLa so doi xung");
    }else{
        printf("\nKhong la so doi xung");
    }

}
