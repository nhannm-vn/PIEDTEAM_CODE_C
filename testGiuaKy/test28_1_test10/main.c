#include <stdio.h>
#include <stdlib.h>
//tìm tổng lớn nhất của dãy con liên tiếp trong mảng
/*
1 3 -5 2 7 6 -2 4 -3 1
output: 17
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findSumMaxArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nMax nexto array: %d", findSumMaxArray(arrMain, sizeMain));


    return 0;
}
int findSumMaxArray(int array[], int size){
    int max = array[0] + array[1];
    int sum = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            sum += array[j];
            if(array[i] + sum > max){
                max = sum + array[i];
            }
        }
        sum = 0;
    }
    return max;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
