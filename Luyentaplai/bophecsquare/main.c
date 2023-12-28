#include <stdio.h>
#include <stdlib.h>
//Số chính phương là số nếu
// căn 2 của một số được số nguyên thì đó là số chính phương

//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không   // số 0 là số chính phương

//n=7 không phải
//0^2 1^2 2^2 3^2
//n=9 là số chính phương
//0^2 1^2 2^2 3^2
int main()
{
    int number = 0;
    char ch;
    do{
        printf("\nMoi nhap vao so nguyen duong: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nMoi ban nhap lai!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);
    /*
    if(sqrt(number) == (int)sqrt(number)){
        printf("\n%d la so chinh phuong", number);
    }else{
        printf("\n%d khong la so chinh phuong!!", number);
    }
    */

    for(int i = 0; i <= sqrt(number); i++){
        if(pow(i,2) == number){
            printf("\n%d la so chinh phuong", number);
            return 0;
        }
    }
    printf("\n%d khong la so chinh phuong", number);

    return 0;
}
