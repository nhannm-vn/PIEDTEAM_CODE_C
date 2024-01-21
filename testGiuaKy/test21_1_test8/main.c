#include <stdio.h>
#include <stdlib.h>
//cho hai mảng, copy giá trị của mảng 2 cho mảng 1
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void cpyArrayV1(int arrayS[], int *sizeS, int arrayM[], int sizeM);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    inputArray(arr1, &size1);
    printf("\nCac gia tri trong mang la: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac gia tri trong mang la: ");
    outputArray(arr2, size2);

    cpyArrayV1(arr1, &size1, arr2, size2);
    printf("\nMang sau copy: ");
    outputArray(arr1, size1);
    return 0;
}
void cpyArrayV1(int arrayS[], int *sizeS, int arrayM[], int sizeM){
    *sizeS = sizeM;
    for(int i = 0; i <= sizeM - 1; i++){
        arrayS[i] = arrayM[i];
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
