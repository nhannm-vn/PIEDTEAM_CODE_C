#include <stdio.h>
#include <stdlib.h>
//Nhập vào số giây rồi quy đổi ra giờ phút giây
void transTime(int s);
int main()
{
    int s = 0;
    char ch;
    do{
        printf("\nNhap vao s: ");
        scanf("%d", &s);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || s < 0){
            printf("\nNhap lai di ne!");
            printf("\n");
        }
    }while(ch != 10 || s < 0);

    transTime(s);
    return 0;
}
void transTime(int s){
    int m = 0;
    int h = 0;
    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;
    printf("%02d:%02d:%02d", h, m, s);
}
