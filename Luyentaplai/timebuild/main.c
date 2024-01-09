#include <stdio.h>
#include <stdlib.h>
//2. 17-timeCalculation
//nhập vào 1 số nguyên đại diện cho s
//từ s đó quy ra giờ phút giây
//vd: 4700s
//01:18:20
//phải in theo format
//hint: %02d | sử dụng / %
int main()
{
    int s = 0;
    int h = 0;
    int m = 0;
    printf("\nNhap vao so s: ");
    scanf("%d", &s);

    h = s / 3600;
    m = (s % 3600) / 60;
    s = (s % 3600) % 60;

    printf("%02d:%02d:%02d", h, m, s);




    return 0;
}
