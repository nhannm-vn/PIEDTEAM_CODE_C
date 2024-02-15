#include <stdio.h>
#include <stdlib.h>
/*
Sắp xếp mảng theo thứ tự tăng dần, nhưng giữ nguyên vị trí của số 0:
Sắp xếp mảng theo thứ tự tăng dần, nhưng giữ nguyên vị trí của số 0:
Input: 1 4 5 6 0 3 2 1 5 4 7 9 0
Ouput: 1 1 2 3 0 4 4 5 5 6 7 9 0
*/
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
    printf("\nMang sau khi sap xep la: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void arrangeArray(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] > array[j] && array[i] != 0 && array[j] != 0){
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
