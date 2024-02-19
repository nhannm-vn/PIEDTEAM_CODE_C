#include <stdio.h>
#include <stdlib.h>
//36-tìm tích của 2 số lớn nhất bất kì trong
//mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMulMax(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    int tmp = findMulMax(arrMain, sizeMain);
    printf("\nTich lon nhat la: %d", tmp);
    return 0;
}
int findMulMax(int array[], int size){
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
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
