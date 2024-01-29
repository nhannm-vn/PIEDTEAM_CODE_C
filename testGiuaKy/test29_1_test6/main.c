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
int findFirstArray(int array[], int size, int key);
int findListIndex(int array[], int size, int arrayR[], int *sizeR, int key);
int main()
{
    int array[100];
    int size = 0;
    int arrayR[100];
    int sizeR = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    inputArray(arrayR, &sizeR);
    printf("\nCac phan tu la: ");
    outputArray(arrayR, sizeR);

    printf("\nNhap vao gia tri can tim: ");
    scanf("%d", &key);


    int tmp = findListIndex(array, size, arrayR, &sizeR, key);
    if(sizeR == 0){
        printf("\nKhong tim thay");
    }else{
        printf("\nCac vi tri la: ");
        outputArray(arrayR, sizeR);
    }

    /*
    int result = findFirstArray(array, size, key);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nTai vi tri: %d", result);
    }
    */


    return 0;
}
int findListIndex(int array[], int size, int arrayR[], int *sizeR, int key){
    *sizeR = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
int findFirstArray(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
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
