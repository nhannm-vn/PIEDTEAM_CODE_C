#include <stdio.h>
#include <stdlib.h>
//Nhap vao hight va width
//In ra
//vd: hight 5 va width 7
/*
*******
*     *
*     *
*     *
*******
*/
int main()
{
    int height = 0;
    int width = 0;
    printf("\nInput height: ");
    scanf("%d", &height);

    printf("\nInput width: ");
    scanf("%d", &width);

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

    return 0;
}
