#include <stdio.h>
#include <stdlib.h>
//reversArrayVer2
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void reverseArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    reverseArray(arrMain, sizeMain);
    printf("\nSau khi doi: ");
    outputArray(arrMain, sizeMain);

    return 0;
}
void reverseArray(int array[], int size){
    for(int i = 0; i <= (size - 1)/2; i++){
        int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
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
