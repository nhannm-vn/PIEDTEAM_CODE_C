#include <stdio.h>
#include <stdlib.h>
//in hinh cn
void printPatern(int height, int width);
int main()
{
    int height = 0;
    int width = 0;
    printf("\nNhap vao height: ");
    scanf("%d", &height);

    printf("\nNhap vao width: ");
    scanf("%d", &width);

    printPatern(height, width);
    return 0;
}
void printPatern(int height, int width){
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
