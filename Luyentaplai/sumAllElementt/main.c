#include <stdio.h>
#include <stdlib.h>
//Nhập vào một số nguyên dương n:
//Tính tổng các đơn vị số của n
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\ninput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai di!");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    int count = 0;
    while(n != 0){
        count += n % 10;
        n /= 10;
    }
    printf("\nTong cac shu so la: %d", count);

    return 0;
}
