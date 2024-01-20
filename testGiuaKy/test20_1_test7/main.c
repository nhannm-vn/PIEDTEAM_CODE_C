#include <stdio.h>
#include <stdlib.h>
//Sắp xếp mảng từ lớn đến bé
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void sapxepArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nMang la: ");
    outputArray(arrMain, sizeMain);
    sapxepArray(arrMain, sizeMain);
    printf("\nMang sau xap sep la: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void sapxepArray(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] < array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
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
