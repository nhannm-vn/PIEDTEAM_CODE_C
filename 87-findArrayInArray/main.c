#include <stdio.h>
#include <stdlib.h>
/*
*Bài 1: ArrayInArray:
        tìm mảng trong mảng
        hàm này nhận vào arr[], key[]
        tìm mảng key có tồn tại trong mảng arr hay không
        nếu có return index
        nếu không return -1
    arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findIndexArray(int arr[], int size, int key[], int sizeKey);
int main()
{
    int arr[100];
    int size = 0;
    int key[100];
    int sizeKey = 0;

    inputArray(arr, &size);
    printf("\nCac phan tu trong arr: ");
    outputArray(arr, size);

    inputArray(key, &sizeKey);
    printf("\nCac phan tu trong key: ");
    outputArray(key, sizeKey);

    if(findIndexArray(arr, size, key, sizeKey) == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri: %d", findIndexArray(arr, size, key, sizeKey));
    }
    return 0;
}
int findIndexArray(int arr[], int size, int key[], int sizeKey){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key[0]){
            int k = 0;
            for(int j = 0; j <= sizeKey - 1; j++){
                if(arr[i + j] == key[j]){
                    k++;
                }
                if(k == sizeKey){
                    return i;
                }
            }
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
