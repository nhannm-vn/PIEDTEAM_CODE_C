#include <stdio.h>
#include <stdlib.h>
//Sắp xếp mảng từ bé đến lớn
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrangeArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    arrangeArray(arrMain, sizeMain);
    printf("\nMang sau sap xep: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void arrangeArray(int array[], int size){
    int tmp = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[j] < array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
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
