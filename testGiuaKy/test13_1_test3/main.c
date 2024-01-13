#include <stdio.h>
#include <stdlib.h>
//3.Nhập vào start và end, in ra màn hình các số chẵn trong đoạn từ start đến end

void printEven();

int main()
{
    printEven();

    return 0;
}
void printEven(){
    int start = 0;
    int end = 0;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = 0;
        tmp = start;
        start = end;
        end = tmp;
    }
    for(int i = start; i <= end; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
}
