#include <stdio.h>
#include <stdlib.h>
//insertArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertArray(int array[], int *size, int pos, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    int key = 0;
    int pos = 0;
    printf("\nNhap vao vi tri: ");
    scanf("%d", &pos);
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int tmp = insertArray(arrMain, &sizeMain, pos, key);
    if(tmp == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau khi chen: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int insertArray(int array[], int *size, int pos, int key){
    if(pos < 0 || pos > *size){
        return 0;
    }else{
        for(int i = *size - 1; i >= pos; i--){
            array[i + 1] = array[i];
        }
        (*size)++;
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
