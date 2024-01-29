#include <stdio.h>
#include <stdlib.h>
//Hàm nhận vào 3 mảng, và 1 vị trí arrMain cắt ra 2 khúc
//Khúc đầu arrSub1 nắm
//Khúc sau arrSub2 nắm
//in ra arrMain không đổi
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void divideArrayV2(int arrMain[], int sizeMain, int arr1[], int *size1,
                  int arr2[], int *size2, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    int pos = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la arrMain la: ");
    outputArray(arrMain, sizeMain);

    inputArray(arr1, &size1);
    printf("\nCac phan tu la arr1 la: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu arr2 la: ");
    outputArray(arr2, size2);

    printf("\nNhap vao vi tri: ");
    scanf("%d", &pos);

    divideArrayV2(arrMain, sizeMain, arr1, &size1, arr2, &size2, pos);
    printf("\nCac phan tu la arrMain la: ");
    outputArray(arrMain, sizeMain);

    printf("\nCac phan tu la arr1 la: ");
    outputArray(arr1, size1);

    printf("\nCac phan tu arr2 la: ");
    outputArray(arr2, size2);


    return 0;
}

void divideArrayV2(int arrMain[], int sizeMain, int arr1[], int *size1,
                  int arr2[], int *size2, int pos){
    *size1 = 0;
    *size2 = 0;
    for(int i = 0; i <= pos - 1; i++){
        arr1[*size1] = arrMain[i];
        (*size1)++;
    }
    for(int i = pos; i <= sizeMain - 1; i++){
        arr2[*size2] = arrMain[i];
        (*size2)++;
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
