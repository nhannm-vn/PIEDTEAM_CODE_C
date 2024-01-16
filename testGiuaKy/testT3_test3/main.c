#include <stdio.h>
#include <stdlib.h>
void printModulo(void);
int main()
{
    printModulo();
    return 0;
}
void printModulo(void){
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
