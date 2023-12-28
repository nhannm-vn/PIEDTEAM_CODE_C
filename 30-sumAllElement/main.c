#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên dương n đàng hoàng
//Tính tổng các đơn vị số của n
//vd: 1234
//result = 10
//vd: 3254
//result = 14
//Hãy dùng \ và % 10
int main()
{
    int n;
    int sum = 0;
    int ch;//chứa \n

    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nDa nhap sai, moi nhap lai di: ");
            printf("\n");
        }
    }while(ch != 10 || n < 0);


    while(n != 0){
        sum += (n % 10);
        n = n / 10;
    }
    printf("\nSum cac chu so la: %d", sum);



    return 0;
}
