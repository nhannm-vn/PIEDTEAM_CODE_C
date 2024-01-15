#include <stdio.h>
#include <stdlib.h>
/*
viết hàm nhập start end. In ra các số chia cho 3 dư 2
*/
void printModulo(int start, int end);
int main()
{
    int start = 0;
    int end = 0;
    printf("\nNhap vao start: ");
    scanf("%d", &start);

    printf("\nNhap vao end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    printf("\nIn ra cac so: ");
    printModulo(start, end);

    return 0;
}
void printModulo(int start, int end){
    for(int i = start; i <= end; i++){
        if(i % 3 == 2){
            printf("%d ", i);
        }
    }
}
