#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    char ch;
    do{
        printf("\nNhap vao so nguyen duong: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || number < 0){
            printf("\nSai roi. Nhap lai di!!");
            printf("\n");
        }
    }while(ch != 10 || number < 0);

    for(int i = 0; i <= sqrt(number); i++){
        if(pow(i,2) == number){
            printf("\n%d la so chinh phuong", number);
            return 0;
        }
    }
    printf("\n%d khong phai so chinh phuong", number);

    return 0;
}
