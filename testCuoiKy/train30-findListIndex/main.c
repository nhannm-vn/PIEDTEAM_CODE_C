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
void findListIndex(int arrMain[], int sizeMain, int arrR[], int *sizeR, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrR[100];
    int sizeR = 0;
    int key = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao key: ");
    scanf("%d", &key);
    findListIndex(arrMain, sizeMain, arrR, &sizeR, key);
    if(sizeR == 0){
        printf("\nKhong tim thay key");
    }else{
        printf("\nCac vi tri xuat hien la: ");
        outputArray(arrR, sizeR);
    }
    /*
    int tmp = findFirstIndex(arrMain, sizeMain, key);
    if(tmp == -1){
        printf("\nKey khong co trong mang");
    }else{
        printf("\nVi tri la: %d", tmp);
    }*/

    return 0;
}
void findListIndex(int arrMain[], int sizeMain, int arrR[], int *sizeR, int key){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == key){
            arrR[*sizeR] = i;
            (*sizeR)++;
        }
    }
}
int findFirstIndex(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
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
