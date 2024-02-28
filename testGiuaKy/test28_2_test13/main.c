#include <stdio.h>
#include <stdlib.h>
//max arr in middle
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMaxArr(int array[], int size);
void arrangeArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    arrangeArr(array, size);
    printf("\nMang sau sap xep la: ");
    outputArray(array, size);
    return 0;
}
void arrangeArr(int array[], int size){
    int n = findMaxArr(array, size);
    int tmp = array[size/2];
    array[size/2] = array[n];
    array[n] = tmp;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[i] && (array[i] != array[size/2]) && (array[j] != array[size/2])){
                int rye = array[i];
                array[i] = array[j];
                array[j] = rye;
            }
        }
    }
}
int findMaxArr(int array[], int size){
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
