#include <stdio.h>
#include <stdlib.h>
//Tìm tích lớn nhất của hai số bất kì trong mảng
//4 9 6 -2 5 -->9*6
//6 -9 7 -2 -5 -->45 = 9 * 5

//7 2 -3 - 7 -9 3 9 2 -->63
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMulMaxArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTich lon nhat la: %d", findMulMaxArray(arrMain, sizeMain));
    return 0;
}
int findMulMaxArray(int array[], int size){
    int max = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(max < array[i] * array[j]){
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
