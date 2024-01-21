#include <stdio.h>
#include <stdlib.h>
//copy 1 cho 2
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void cpyArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 =0;
    inputArray(arr1, &size1);
    printf("\nCac phan tu la: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu la: ");
    outputArray(arr2, size2);

    cpyArrayV2(arr2, &size2, arr1, size1);
    printf("\nMang sau copy: ");
    outputArray(arr2, size2);

    return 0;
}
void cpyArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM){
    *sizeS = 0;
    for(int i = 0; i <= sizeM - 1; i++){
        arrayS[*sizeS] = arrayM[i];
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
