#include <stdio.h>
#include <stdlib.h>
//tìm tổng lớn nhất của dãy con liên tiếp trong mảng
/*
1 3 -5 2 7 6 -2 4 -3 1
output: 17
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findSumNextMax(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int tmp = findSumNextMax(array, size);
    printf("\nMax la: %d", tmp);
    return 0;
}
int findSumNextMax(int array[], int size){
    int max = array[0] + array[1];
    for(int i = 0; i <= size - 2; i++){
        int sum = 0;
        for(int j = i+1; j <= size - 1; j++){
            sum += array[j];
            if(array[i] + sum > max){
                max = sum + array[i];
            }
        }
    }
    return max;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
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
