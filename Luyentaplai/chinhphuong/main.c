#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 số nguyên (dương) n
//Kiểm tra xem n có phải chính phương hay không

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nMoi nhap lai!");
        }
    }while(ch != 10 || n < 0);

    if(sqrt(n) == (int)sqrt(n)){
        printf("\nLa so chinh phuong do!");
    }else{
        printf("\nKhong la so chinh phuong dau");
    }



    return 0;
}
