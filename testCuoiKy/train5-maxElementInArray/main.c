#include <stdio.h>
#include <stdlib.h>
//•	Tìm số lớn nhất trong mảng ( 6p )
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int maxElement(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nPhan tu lon nhat la: %d", maxElement(arrMain, sizeMain));
    return 0;
}
int maxElement(int array[], int size){
    int max = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
