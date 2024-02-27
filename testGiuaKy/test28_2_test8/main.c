#include <stdio.h>
#include <stdlib.h>
/*
insertArray: nhét một số vào vị trí nào đó trong mảng
     nhiệm vụ: hàm nhận vào một vị trí và key. Nhét key vào vị trí thứ pos trong
     mảng
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertInArr(int array[], int *size, int key, int pos);
int main()
{
    int array[100];
    int size = 0;
    int pos = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int tmp = insertInArr(array, &size, key, pos);
    if(tmp == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int insertInArr(int array[], int *size, int key, int pos){
    if(pos < 0 || pos > *size){
        return 0;
    }
    for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];
    }
    (*size)++;
    array[pos] = key;
    return 1;
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
