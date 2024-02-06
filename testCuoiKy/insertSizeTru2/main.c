#include <stdio.h>
#include <stdlib.h>
//Viết chương trình nhận vào 2 mảng A và B
//Chèn mảng B vào vị trí thứ sizeA - 2 trong mảng A
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void insertAinB(int arrA[], int *sizeA, int arrB[], int sizeB);
void insertArray(int array[], int *size, int key, int pos);
int main()
{
    int arrA[100];
    int sizeA = 0;
    int arrB[100];
    int sizeB = 0;
    inputArray(arrA, &sizeA);
    printf("\nCac gia tri mang A: ");
    outputArray(arrA, sizeA);

    inputArray(arrB, &sizeB);
    printf("\nCac gia tri mang B: ");
    outputArray(arrB, sizeB);

    insertAinB(arrA, &sizeA, arrB, sizeB);
    printf("\nMang A sau thay doi: ");
    outputArray(arrA, sizeA);
    return 0;
}
void insertArray(int array[], int *size, int key, int pos){
    for(int i = *size - 1; i >= pos; i--){
        array[i+1] = array[i];
    }
    (*size)++;
    array[pos] = key;
}
void insertAinB(int arrA[], int *sizeA, int arrB[], int sizeB){
    int site = *sizeA - 2;
    for(int i = sizeB - 1; i >= 0; i--){
        insertArray(arrA, sizeA, arrB[i], site);
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
