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
    /*
    int number = 0;
    char ch;
    do{
        printf("\nInput so di ne: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(number < 0 || ch != 10){
            printf("\nSai roi. Nhap lai di ban!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    int sum = 0;
    while(number != 0){
        sum += number % 10;
        number /= 10;
    }
    printf("\nTong cac chu so: %d", sum);
    */


   // Bài 1: Nhập vào (n nguyên dương). Đếm số lượng chữ số của n là số nguyên tố.
   //Ví dụ
   //Đầu vào: 1222333999888 .Kết quả: 6
    int number = 0;
    char ch;
    do{
        printf("\nInput so di ne: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(number < 0 || ch != 10){
            printf("\nSai roi. Nhap lai di ban!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);
    int tmp = 0;
    int dem = 0;
    while(number != 0){
        tmp = number % 10;
        if(tmp >= 2){
        int isPrime = 1;
        for(int i = 2; i <= tmp - 1; i++){
                if(tmp % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                dem++;
            }
        }
        number /= 10;
    }
    printf("So co tong cong %d chu so nguyen to", dem);

    return 0;
}
