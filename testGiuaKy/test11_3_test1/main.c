#include <stdio.h>
#include <stdlib.h>
//tìm tích hai số lớn nhất
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMaxMul(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);
    int result = findMaxMul(array, size);
    printf("\nMax la: %d", result);

    return 0;
}
int findMaxMul(int array[], int size){
    int max = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] * array[j] > max){
                max = array[i] * array[j];
            }
        }
    }
    return max;
}

void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}

void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i   = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
