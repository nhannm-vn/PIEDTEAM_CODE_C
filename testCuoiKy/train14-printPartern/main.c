#include <stdio.h>
#include <stdlib.h>
//Nhap vao height va width
//In ra
//vd: height 5 va width 7
/*
*******
*     *
*     *
*     *
*******
*/
void printParten(int height, int width);
int main()
{
    int height = 0;
    int width = 0;
    printf("\nNhap vao height: ");
    scanf("%d", &height);

    printf("\nNhap vao width: ");
    scanf("%d", &width);

    printParten(height, width);

    return 0;
}
void printParten(int height, int width){
    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
