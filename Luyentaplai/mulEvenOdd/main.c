#include <stdio.h>
#include <stdlib.h>
//Nhập vào số nguyên n >= 2
//Tính tích các số chẵn và tích các số lẻ từ 1 dến n - 1

//vd: nhập n = 5
//tích các số chẵn 2 * 4
//tích các số lẻ 1 * 3
int main()
{
    int n = 0;
    int mulEven = 1, mulOdd = 1;//Chứa tích lẻ và chẵn
    int hasEven = 0, hasOdd = 0;//Mặc định là không có số chẵn hoặc lẻ nào
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 2){
            printf("\nXin moi nhap lai");
            printf("\n");
        }
    }while(ch != 10 || n < 2);

    for(int i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }

    mulEven = mulEven * hasEven;
    mulOdd = mulOdd * hasOdd;

    printf("\nTich cac so chan la: %d", mulEven);
    printf("\nTich cac so le la: %d", mulOdd);








    return 0;
}