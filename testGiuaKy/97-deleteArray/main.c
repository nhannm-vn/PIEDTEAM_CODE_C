#include <stdio.h>
#include <stdlib.h>
/*
deleteArray: xóa phần tử ở vị trí thứ pos trong mảng
     nhiệm vụ: hàm  nhận vào một mảng, pos
     vào trong mảng tìm thằng pos và xóa
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int deleteArray(int array[], int *size, int pos);
int main()
{
    int array[100];
    int size = 0;
    int pos = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &pos);

    int tmp = deleteArray(array, &size, pos);
    if(tmp == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau khi xoa: ");
        outputArray(array, size);
    }
    return 0;
}
int deleteArray(int array[], int *size, int pos){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }else{
        for(int i = pos; i <= *size - 2; i++){
            array[i] = array[i + 1];
        }
        (*size)--;
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
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
