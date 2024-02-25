#include <stdio.h>
#include <stdlib.h>
void inputArray(float array[], int *size);
void outputArray(float array[], int size);
int main()
{
    float array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    return 0;
}
void outputArray(float array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("\n%f", array[i]);
    }
}
void inputArray(float array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%f", &array[i]);
    }
}
