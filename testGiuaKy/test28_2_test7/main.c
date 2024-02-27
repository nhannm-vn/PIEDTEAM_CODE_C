#include <stdio.h>
#include <stdlib.h>
//hàm nhận vào 2 mảng và một ví trí
//cưa đôi mảng thành 2 phần
//phần đầu giữ nguyên, phần sau gáp vô mảng mới
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void divideArrV1(int arr1[], int *size1, int arr2[], int *size2, int pos);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    int pos = 0;
    inputArray(arr1, &size1);
    printf("\nMang 1 ne: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nMang 2 ne: ");
    outputArray(arr2, size2);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    divideArrV1(arr1, &size1, arr2, &size2, pos);
    printf("\nMang 1 ne: ");
    outputArray(arr1, size1);
    printf("\nMang 2 ne: ");
    outputArray(arr2, size2);
    return 0;
}
void divideArrV1(int arr1[], int *size1, int arr2[], int *size2, int pos){
    *size2 = 0;
    for(int i = pos; i <= *size1 - 1; i++){
        arr2[*size2] = arr1[i];
        (*size2)++;
    }
    *size1 -= *size2;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
