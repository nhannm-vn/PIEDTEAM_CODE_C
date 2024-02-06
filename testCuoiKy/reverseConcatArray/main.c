#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình nhận vào một mảng, đảo ngược các phần tử trong mảng đó .
Input : 1 2 3 4 5
Ouput : 5 4 3 2 1
Viết chương trình nhận vào 2 mảng A và B, Nối mảng B vào mảng A
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void reverArray(int array[], int size);
void concatArray(int arrA[], int *sizeA, int arrB[], int sizeB);
int main()
{
    int arrA[100];
    int sizeA = 0;
    int arrB[100];
    int sizeB = 0;
    inputArray(arrA, &sizeA);
    printf("\nCac phan tu mang A: ");
    outputArray(arrA, sizeA);

    inputArray(arrB, &sizeB);
    printf("\nCac phan tu mang B: ");
    outputArray(arrB, sizeB);

    reverArray(arrA, sizeA);
    concatArray(arrA, &sizeA, arrB, sizeB);
    printf("\nMang A sau bien doi: ");
    outputArray(arrA, sizeA);
    return 0;
}
void concatArray(int arrA[], int *sizeA, int arrB[], int sizeB){
    for(int i = 0; i <= sizeB - 1; i++){
        arrA[*sizeA] = arrB[i];
        (*sizeA)++;
    }
}
void reverArray(int array[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
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
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
