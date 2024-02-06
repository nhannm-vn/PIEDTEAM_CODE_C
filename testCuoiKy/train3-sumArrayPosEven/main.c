#include <stdio.h>
#include <stdlib.h>
//Viết hàm tính tổng các phần tử có vị trí là chẵn trong mảng ( 6p )
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumArrayPosEven(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong cac phan tu vi tri chan la: %d", sumArrayPosEven(arrMain, sizeMain));
    return 0;
}
int sumArrayPosEven(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
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
