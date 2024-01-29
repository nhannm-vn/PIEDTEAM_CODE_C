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
int findArray(int array[], int size, int key[], int sizeKey);
int main()
{
    int array[100];
    int size = 0;
    int key[100];
    int sizeKey = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    inputArray(key, &sizeKey);
    printf("\nCac phan tu can tim: ");
    outputArray(key, sizeKey);

    int tmp = findArray(array, size, key, sizeKey);
    if(tmp == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\n%d", tmp);
    }

    return 0;
}
int findArray(int array[], int size, int key[], int sizeKey){
    int k = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key[0]){
            k = 0;
            for(int j = 0; j <= sizeKey - 1; j++){
                if(array[i + j] == key[j]){
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
