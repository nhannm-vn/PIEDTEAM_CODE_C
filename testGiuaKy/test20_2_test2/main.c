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
int findArrayInArray(int arrMain[], int sizeMain, int arrKey[], int sizeKey);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrKey[100];
    int sizeKey = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrKey, &sizeKey);
    printf("\nCac phan tu la: ");
    outputArray(arrKey, sizeKey);

    int tmp = findArrayInArray(arrMain, sizeMain, arrKey, sizeKey);
    if(tmp == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri la: %d", tmp);
    }
    return 0;
}
int findArrayInArray(int arrMain[], int sizeMain, int arrKey[], int sizeKey){
    for(int i = 0; i <= sizeMain - 1; i++){
        int k = 0;
        if(arrMain[i] == arrKey[0]){
            for(int j = 0; j <= sizeKey - 1; j++){
                if(arrKey[j] == arrMain[i+j]){
                    k++;
                }
            }
            if(k == sizeKey){
                return i;
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
