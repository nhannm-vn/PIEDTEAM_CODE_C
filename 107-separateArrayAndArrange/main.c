#include <stdio.h>
#include <stdlib.h>
/*
Tách Mảng Thành 2 Phần Chẵn Và Lẽ
Mảng Chẵn thì Giảm dần
Mảng Lẽ thì Tăng Dần
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void separateArray(int array[], int size, int arrEven[], int *sizeEven, int arrOdd[], int *sizeOdd);
void arrangeDe(int arrEven[], int sizeEven);
void arrangeIn(int arrOdd[], int sizeOdd);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrEven[100];
    int sizeEven = 0;
    int arrOdd[100];
    int sizeOdd = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    separateArray(arrMain, sizeMain, arrEven, &sizeEven, arrOdd, &sizeOdd);
    arrangeDe(arrEven, sizeEven);
    arrangeIn(arrOdd, sizeOdd);
    printf("\nMang le la: ");
    outputArray(arrOdd, sizeOdd);

    printf("\nMang chan la: ");
    outputArray(arrEven, sizeEven);
    return 0;
}
void arrangeIn(int arrOdd[], int sizeOdd){
    for(int i = 0; i <= sizeOdd - 2; i++){
        for(int j = i+1; j <= sizeOdd - 1; j++){
            if(arrOdd[j] < arrOdd[i]){
                int tmp = arrOdd[i];
                arrOdd[i] = arrOdd[j];
                arrOdd[j] = tmp;
            }
        }
    }
}
void arrangeDe(int arrEven[], int sizeEven){
    for(int i = 0; i <= sizeEven - 2; i++){
        for(int j = i+1; j <= sizeEven - 1; j++){
            if(arrEven[j] > arrEven[i]){
                int tmp = arrEven[i];
                arrEven[i] = arrEven[j];
                arrEven[j] = tmp;
            }
        }
    }
}
void separateArray(int array[], int size, int arrEven[], int *sizeEven, int arrOdd[], int *sizeOdd){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            arrEven[*sizeEven] = array[i];
            (*sizeEven)++;
        }else{
            arrOdd[*sizeOdd] = array[i];
            (*sizeOdd)++;
        }
    }
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
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
