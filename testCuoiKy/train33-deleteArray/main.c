#include <stdio.h>
#include <stdlib.h>
//deleteArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int deleteArray(int array[], int *size, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    int tmp = deleteArray(arrMain, &sizeMain, pos);
    if(tmp == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau khi xoa la: ");
        outputArray(arrMain, sizeMain);
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
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
