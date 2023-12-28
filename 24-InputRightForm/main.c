#include <stdio.h>
#include <stdlib.h>

//Ép người dùng nhập vào đúng dạng số nguyên
//  Ví dụ:
// 9 ok
//9.7 chửi và bắt nhập lại
//9a  chửi và bắt nhập lại
int main()
{
    int number;
    char ch;
    do{
        printf("\nBan hay nhap vao so nguyen di: ");
        scanf("%d", &number);//sau cái nhập này sẽ có cái enter(\n)
        printf("%d", number);
        scanf("%c", &ch);//Này tạo ra để hứng cái \n
        fflush(stdin);
        if(ch != 10){
            printf("\nDmCm, hieu khum?");//9.7
        }

    }while(ch != 10);//Khi nào ch chứa \n thì dừng




    return 0;
}
