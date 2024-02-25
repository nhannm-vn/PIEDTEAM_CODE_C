#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMulMaxInArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    int tmp = findMulMaxInArray(array, size);
    printf("\nMax la: %d", tmp);
    return 0;
}
int findMulMaxInArray(int array[], int size){
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
