#include <stdio.h>
#include <stdlib.h>
//cpy luon độ dài
//cpy 1 cho 2
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void cpyArray(int arrS[], int *sizeS, int arrM[], int sizeM);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    inputArray(arr1, &size1);
    printf("\nCac phan tu trong mang arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu trong mang arr2: ");
    outputArray(arr2, size2);

    cpyArray(arr2, &size2, arr1, size1);
    printf("\nMang 2 sau khi cpy: ");
    outputArray(arr2, size2);


    return 0;
}
void cpyArray(int arrS[], int *sizeS, int arrM[], int sizeM){
    *sizeS = sizeM;
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[i] = arrM[i];
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
