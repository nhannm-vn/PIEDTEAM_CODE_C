#include <stdio.h>
#include <stdlib.h>
//ver 2 cpy xoa roi nhet
//copy 2 cho 1
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void cpyArrayVer2(int arrS[], int *sizeS, int arrM[], int sizeM);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;

    inputArray(arr1, &size1);
    printf("\nCac phan tu cua arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu cua arr2: ");
    outputArray(arr2, size2);

    cpyArrayVer2(arr1, &size1, arr2, size2);
    printf("\nMang 1 sau khi cpy mang 2 la: ");
    outputArray(arr1, size1);

    return 0;
}
void cpyArrayVer2(int arrS[], int *sizeS, int arrM[], int sizeM){
    *sizeS = 0;
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
