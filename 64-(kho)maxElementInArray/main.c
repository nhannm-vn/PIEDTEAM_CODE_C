#include <stdio.h>
#include <stdlib.h>
//Tìm số lớn nhất trong mảng
const int MAX = 100;
void inputArray(int array[], int *size);
void maxElement(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    maxElement(arrMain, sizeMain);
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
void maxElement(int array[], int size){
    int max = array[0];
    for(int i = 1; i <= size - 1; i++){
        if(max <= array[i]){
            max = array[i];
        }
    }
    printf("\nmax: %d", max);
}
