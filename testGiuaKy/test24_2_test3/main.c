#include <stdio.h>
#include <stdlib.h>
void printNumber();
int main()
{
    printNumber();

    return 0;
}
void printNumber(){
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
    for(int i = start; i <= end; i++){
        if(i % 4 == 3){
            printf("%d ", i);
        }
    }
}
