#include <stdio.h>
#include <stdlib.h>
//2. 17-timeCalculation
//nhập vào 1 số nguyên đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//hint: %02d | sử dụng / %
void transTime(int s);
int main()
{
    int s = 0;
    char ch;
    do{
        printf("\nNhap vao so s: ");
        scanf("%d", &s);
        scanf("%c", &ch);
        if(ch != 10 || s <= 0){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10 || s <= 10);
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
