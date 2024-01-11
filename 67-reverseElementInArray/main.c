#include <stdio.h>
#include <stdlib.h>
//Đảo ngược các phần tử của mảng
void inputArray(int array[], int *size);
void reverseNumber(int array[], int size);
void outputArray(int array[], int size);

int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    reverseNumber(arrMain, sizeMain);
    outputArray(arrMain, sizeMain);

    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    printf("\nSau khi dao nguoc la: ");
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void reverseNumber(int array[], int size){
    for(int i = 0; i <= (size-1)/2; i++){
        int tmp =  array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}
