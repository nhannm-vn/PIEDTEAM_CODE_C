#include <stdio.h>
#include <stdlib.h>
/*
insertArray(arr[], pos, key)
nhét key vào vị trí pos trong mảng
arr: 2 4 6 8 10   pos: 2, key: 9
i  : 0 1 2 3 4
=>
arr: 2 4 9 6 8 10
i  : 0 1 2 3 4 5

1 2 3 4
2 3 4 5 6
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void insertArray(int array[], int *size, int pos, int key);
int main()
{
    int array[100];
    int size = 0;
    int pos = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);
    printf("\nNhap vao vi tri: ");
    scanf("%d", &pos);
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    insertArray(array, &size, pos, key);
    printf("\nSau khi chen la: ");
    outputArray(array, size);
    return 0;
}
void insertArray(int array[], int *size, int pos, int key){
    *size += 1;
    for(int i = *size - 1; i > pos; i--){
        array[i] = array[i - 1];
    }
    array[pos] = key;
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
