#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void printSide(int array[], int *size, int x);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    int x;
    printf("\nNhap vao x: ");
    scanf("%d", &x);

    printSide(array, &size, x);
    printf("\nCac vi tri ne: ");
    outputArray(array, size);
    return 0;
}
void printSide(int array[], int *size, int x){
    int sub[100];
    int sizeSub = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == x){
            sub[sizeSub] = i;
            sizeSub++;
        }
    }
    (*size) = 0;
    for(int i = 0; i <= sizeSub - 1; i++){
        array[*size] = sub[i];
        (*size)++;
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
