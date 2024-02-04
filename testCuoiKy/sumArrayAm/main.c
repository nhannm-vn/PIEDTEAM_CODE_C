#include <stdio.h>
#include <stdlib.h>
/*
Viết một hàm để tính tổng của tất cả các số nguyên âm trong một mảng.
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumArrayAm(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong cac so nguyen am la: %d", sumArrayAm(arrMain, sizeMain));

    return 0;
}
int sumArrayAm(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] < 0){
            sum += array[i];
        }
    }
    return sum;
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
