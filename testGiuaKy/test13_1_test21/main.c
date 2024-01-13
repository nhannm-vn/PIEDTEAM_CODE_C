#include <stdio.h>
#include <stdlib.h>
//Tìm min của mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int minArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri cua mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nMin: %d", minArray(arrMain, sizeMain));
    return 0;
}
int minArray(int array[], int size){
    int min = array[0];
    for(int i = 1; i <= size - 1; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}
void inputArray(int array[], int *size){
    printf("\nNhap do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
