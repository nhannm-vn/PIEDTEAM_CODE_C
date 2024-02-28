#include <stdio.h>
#include <stdlib.h>
/*
Tách Mảng Thành 2 Phần Chẵn Và Lẽ
Mảng Chẵn thì Giảm dần
Mảng Lẽ thì Tăng Dần
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrIn(int array[], int size);
void arrDe(int array[], int size);
void separateArr(int array[], int size, int arrEven[], int *sizeEven, int arrOdd[], int *sizeOdd);
int main()
{
    int array[100];
    int size = 0;
    int arrEven[100];
    int sizeEven = 0;
    int arrOdd[100];
    int sizeOdd = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    separateArr(array, size, arrEven, &sizeEven, arrOdd, &sizeOdd);
    printf("\nMang Even ne: ");
    outputArray(arrEven, sizeEven);
    printf("\nMang Odd ne: ");
    outputArray(arrOdd, sizeOdd);


    return 0;
}
void separateArr(int array[], int size, int arrEven[], int *sizeEven, int arrOdd[], int *sizeOdd){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            arrEven[*sizeEven] = array[i];
            (*sizeEven)++;
        }else{
            arrOdd[*sizeOdd] = array[i];
            (*sizeOdd)++;
        }
    }
    arrIn(arrOdd, *sizeOdd);
    arrDe(arrEven, *sizeEven);
}
void arrIn(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}
void arrDe(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[j] > array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
