#include <stdio.h>
#include <stdlib.h>
//Viết chương trình in bảng cửu chương ra màn hình

void printBCC();

int main()
{
    printBCC();

    return 0;
}
void printBCC(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 10; j++){
            printf("\n%d x %d = %d", i, j, i * j);
        }
        printf("\n");
    }
}
