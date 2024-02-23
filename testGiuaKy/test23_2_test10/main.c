#include <stdio.h>
#include <stdlib.h>
//compareArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int comparaArray(int arr1[], int size1, int arr2[], int size2);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    inputArray(arr1, &size1);
    printf("\nCac phan tu arr1 la: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu arr2 la: ");
    outputArray(arr2, size2);

    int result = comparaArray(arr1, size1, arr2, size2);
    if(result == 1){
        printf("\narr1 > arr2");
    }else if(result == -1){
        printf("\narr1 < arr2");
    }else{
        printf("\narr1 = arr2");
    }
    return 0;
}
int comparaArray(int arr1[], int size1, int arr2[], int size2){
    int size = 0;
    if(size1 < size2){
        size = size1;
    }else{
        size = size2;
    }
    for(int i = 0; i <= size - 1; i++){
        if(arr1[i] > arr2[i]){
            return 1;
        }else if(arr1[i] < arr2[i]){
            return -1;
        }
    }
    if(size1 > size2){
        return 1;
    }else if(size1 < size2){
        return -1;
    }else{
        return 0;
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
