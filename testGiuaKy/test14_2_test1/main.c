#include <stdio.h>
#include <stdlib.h>
//in ra hinh cn:
void printPartern(int height, int width);
int main()
{
    int height = 0;
    int width = 0;
    char ch;
    char sh;
    do{
        printf("\nNhap vao height: ");
        scanf("%d", &height);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);

    do{
        printf("\nNhap vao width: ");
        scanf("%d", &width);
        scanf("%c", &sh);
        fflush(stdin);
        if(sh != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(sh != 10);

    printPartern(height, width);
    return 0;
}
void printPartern(int height, int width){
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
