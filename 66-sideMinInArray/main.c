#include <stdio.h>
#include <stdlib.h>
//In ra vị trí mà mảng có giá trị nhỏ nhất

void inputArray(int array[], int *size);
void sideMinArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    sideMinArray(arrMain, sizeMain);

    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void sideMinArray(int array[], int size){
    int minArray = array[0];
    int tmp = 0;
    for(int i = 0; i <= size - 1; i++){
        if(minArray >= array[i]){
            minArray = array[i];
            tmp = i;
        }
    }
    printf("\nVi tri ma mang nho nhat la: %d", tmp);
}
