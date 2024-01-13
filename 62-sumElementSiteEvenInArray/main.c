#include <stdio.h>
#include <stdlib.h>
//tính tổng các phần tử có vị trí chẵn

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumNumber(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    outputArray(arrMain, sizeMain);
    printf("\nTong: %d", sumNumber(arrMain, sizeMain));
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
    printf("\nCac gia tri mang la: ");
    for(int i = 0; i <= size - 1; i++){
        printf("\narray[%d]: ", i);
        printf("%d", array[i]);
    }
}
int sumNumber(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}

