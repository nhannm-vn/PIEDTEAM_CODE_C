#include <stdio.h>
#include <stdlib.h>
//Tìm tích lớn nhất của hai số bất kì trong mảng
//4 9 6 -2 5 -->9*6
//6 -9 7 -2 -5 -->45 = 9 * 5

//7 2 -3 - 7 -9 3 9 2 -->63
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMulMaxInArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int result = findMulMaxInArr(array, size);
    printf("\nMax 2 so la: %d", result);
    return 0;
}
int findMulMaxInArr(int array[], int size){
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
