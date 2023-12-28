#include <stdio.h>
#include <stdlib.h>
//Mỗi ngày được thưởng hạt thóc, hỏi đến ngày 64 được bao nhiu?(cấp số nhân)
int main()
{
    int day = 1;
    double rice = 1;

    do{
        printf("\nVao ngay %d nhan duoc so hat thoc: ", day);
        printf("%.lf", rice);
        rice = rice * 2;
        day++;
    }while(day < 65);


    return 0;
}
