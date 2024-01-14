#include <stdio.h>
#include <stdlib.h>
//Nhập vào một vị trí và xóa phân tử tại ví trí đó
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteArray(int array[], int size, int n);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int n = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri trong mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &n);
    printf("\nCac gia tri sau khi xoa: ");
    deleteArray(arrMain, sizeMain, n);
    return 0;
}
void deleteArray(int array[], int size, int n){
    for(int i = n; i <= size - 1; i++){
        array[i] = array[i + 1];
    }
    for(int i = 0; i <= size - 2; i++){
        printf("%d ", array[i]);
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
