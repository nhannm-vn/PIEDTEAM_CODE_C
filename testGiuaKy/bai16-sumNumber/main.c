#include <stdio.h>
#include <stdlib.h>
/*
•	Viết hàm nhận vào start và end
tính tổng các phần tử trong đoạn dùng hàm có kết quả in ra màn hình ( 5p )
*/

int sumNumber(int start, int end);

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

    printf("\n%d", sumNumber(start, end));

    return 0;
}
int sumNumber(int start, int end){
    int sum = 0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    return sum;
}
