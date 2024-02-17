#include <stdio.h>
#include <stdlib.h>
//comparative Array
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int compareArray(int arrA[], int sizeA, int arrB[], int sizeB);
int main()
{
    int arrA[100];
    int sizeA = 0;
    int arrB[100];
    int sizeB = 0;
    inputArray(arrA, &sizeA);
    printf("\nCac phan tu la: ");
    outputArray(arrA, sizeA);

    inputArray(arrB, &sizeB);
    printf("\nCac phan tu la: ");
    outputArray(arrB, sizeB);

    int tmp = compareArray(arrA, sizeA, arrB, sizeB);

    if(tmp == 1){
        printf("\narrA > arrB");
    }else if(tmp == -1){
        printf("\narrA < arrB");
    }else{
        printf("\narrA = arrB");
    }

    return 0;
}
int compareArray(int arrA[], int sizeA, int arrB[], int sizeB){
    int size = 0;
    if(sizeA > sizeB){
        size = sizeB;
    }else{
        size = sizeA;
    }
    for(int i = 0; i <= size - 1; i++){
        if(arrA[i] > arrB[i]){
            return 1;
        }else if(arrA[i] < arrB[i]){
            return -1;
        }
    }
    if(sizeA > sizeB){
        return 1;
    }else if(sizeA < sizeB){
        return -1;
    }else{
        return 0;
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
