#include <stdio.h>
#include <stdlib.h>
/*
Sắp xếp mảng số nguyên sao cho phần tử lớn nhất đứng giữa:
Sắp xếp một mảng số nguyên sao cho phần tử lớn nhất đứng giữa mảng.
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMaxInArray(int array[], int size);
void arrangeMidleArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    arrangeMidleArray(arrMain, sizeMain);
    printf("\nMang sau khi sap xep la: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void arrangeMidleArray(int array[], int size){
    int max = findMaxInArray(array, size);
    int tmp = array[max];
    array[max] = array[size/2];
    array[size/2] = tmp;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[i] && array[i] != array[size/2] && array[j] != array[size/2]){
                int rye = array[i];
                array[i] = array[j];
                array[j] = rye;
            }
        }
    }
}
int findMaxInArray(int array[], int size){
    int max = array[0];
    int k = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] > max){
            max = array[i];
            k = i;
        }
    }
    return k;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
