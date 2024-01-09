#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào start và end, in ra màn hình các số chẵn trong đoạn từ start đến end ( 3p )
*/
int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
