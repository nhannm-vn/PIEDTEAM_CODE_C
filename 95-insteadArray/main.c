#include <stdio.h>
#include <stdlib.h>
/*
instead: thay thế giá trị của một phần trong mảng
mô tả: f(array[], pos, key)
vào trong mảng ở vị trí pos thay bằng key
arr: 2 4 6 8 10
i    0 1 2 3 4  pos: 2, key: 9
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insteadArray(int array[], int size, int pos, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int key = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu trong mang: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int result = insteadArray(arrMain, sizeMain, pos, key);

    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nCac phan tu trong mang: ");
        outputArray(arrMain, sizeMain);
    }

    return 0;
}
int insteadArray(int array[], int size, int pos, int key){
    if(pos < 0 || pos > size - 1){
        return 0;
    }else{
        array[pos] = key;
        return 1;
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
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
