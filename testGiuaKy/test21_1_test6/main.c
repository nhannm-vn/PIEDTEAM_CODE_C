#include <stdio.h>
#include <stdlib.h>
//Nhập vào hai mảng và
//ghép nối mảng 1 vào mảng 2
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concatArray(int arrS[], int *sizeS, int arrM[], int sizeM);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;

    inputArray(arr1, &size1);
    printf("\nCac phan tu mang 1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu mang 2: ");
    outputArray(arr2, size2);

    concatArray(arr1, &size1, arr2, size2);
    printf("\n");
    outputArray(arr1, size1);
    return 0;
}
void concatArray(int arrS[], int *sizeS, int arrM[], int sizeM){
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];
        (*sizeS)++;
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
