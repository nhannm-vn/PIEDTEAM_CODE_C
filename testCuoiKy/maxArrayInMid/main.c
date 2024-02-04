#include <stdio.h>
#include <stdlib.h>
//Sắp xếp một mảng số nguyên sao cho phần tử lớn nhất đứng giữa mảng.
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrArrayInMid(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    arrArrayInMid(arrMain, sizeMain);
    printf("\nMang xap sep thep yeu cau: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void arrArrayInMid(int array[], int size){
    int max = array[0];
    int pos = 0;
    int tmp = 0;
    for(int i = 1; i <= size - 1; i++){
        if(array[i] > max){
            max = array[i];
            pos = i;
        }
    }
    tmp = array[pos];
    array[pos] = array[size/2];
    array[size/2] = tmp;

    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[i] && array[i] != max && array[j] != max){
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
