#include <stdio.h>
#include <stdlib.h>
//Sắp xếp mảng từ bé đến lớn
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void sapXepArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri mang: ");
    outputArray(arrMain, sizeMain);

    printf("\nSap xep mang la: ");
    sapXepArray(arrMain, sizeMain);
    return 0;
}
void sapXepArray(int array[], int size){
    int tmp = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){//Mục đích xếp các số nhỏ nhất lần lượt
            if(array[i] > array[j]){
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap do lon mang: ");
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
