#include <stdio.h>
#include <stdlib.h>
//nhập giây đổi giờ p s
void transTime(int s);
int main()
{
    int s = 0;
    char ch;
    do{
        printf("\nNhap vao so s: ");
        scanf("%d", &s);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || s < 0){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || s < 0);

    printf("\nQuy doi la: \n");
    transTime(s);
    return 0;
}
void transTime(int s){
    int m = 0;
    int h = 0;
    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;
    printf("\n%02d:%02d:%02d", h, m, s);
}