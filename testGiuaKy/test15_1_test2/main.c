#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào chiều dài và rộng của một hình chữ nhật và in ra nó bằng hàm
*/
void printPartern(int height, int width);
int main()
{
    int height = 0;
    int width = 0;
    printf("\nNhap vao height: ");
    scanf("%d", &height);

    printf("\nNhap vao width: ");
    scanf("%d", &width);

    printPartern(height, width);

    return 0;
}
void printPartern(int height, int width){
    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(w == 1 || w == width || h == 1 || h == height){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
