#include <stdio.h>
#include <stdlib.h>
/*
find first index: tìm vị trí đầu tiên của key trong mảng
    hàm nhận vào một mảng array, nhận thêm key
    tìm vị trí đầu tiên phát hiện key
find list index: tìm các vị trí xuất hiện key trong mảng
    nhận vào một mảng array và key và một mảng arrayR
    tìm các vị trí xuất hiện key và lưu vào arrayR
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findFirstIndex(int array[], int size, int key);
void findListIndex(int array[], int size, int arrayR[], int *sizeR, int key);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nNhap vao key: ");
    scanf("%d", &key);
    return 0;
}
void findListIndex(int array[], int size, int arrayR[], int *sizeR, int key){
    *sizeR = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
int findFirstIndex(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key{
            return i;
        }
    }
    return -1;
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
