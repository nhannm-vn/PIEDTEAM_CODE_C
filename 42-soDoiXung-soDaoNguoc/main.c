#include <stdio.h>
#include <stdlib.h>
//Nhập và một số nguyên. Kiểm tra xem có là số đối xứng hay không
//vd: 121, 13431, 1331 1 13 133 1331
//Xài / % thử coi sau khi đảo ngược thì có là số đối xứng hay không
//121 = 0*10 + 1 = 1*10 + 2 = 12*10 + 1
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
        }
    }while(ch != 10);

    int m = 0;
    int rye = 0;
    int tmp = n;//Vi can phai so sanh n nen sau no can phai co bien nay
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }

    if(m == n){
        printf("\nLa so dao nguoc");
    }else{
        printf("\nKhong phai sdn dau");
    }




    return 0;
}
