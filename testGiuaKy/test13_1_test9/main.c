#include <stdio.h>
#include <stdlib.h>
//Viết chương trình in ra hình chữ nhật có kích thước m x n

void printPatern(int height, int width);

int main()
{
    int height = 0;
    int width = 0;
    printf("\nNhap height: ");
    scanf("%d", &height);

    printf("\nNhap width: ");
    scanf("%d", &width);

    printf("\nIn hinh: \n");
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
