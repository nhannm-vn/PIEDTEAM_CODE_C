#include <stdio.h>
#include <stdlib.h>
//splice: xoa so luong phan tu tu vi tri
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int splice(int array[], int *size, int pos, int amount);
int main()
{
    int array[100];
    int size = 0;
    int pos = 0;
    int amount = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    printf("\nNhap vao amount: ");
    scanf("%d", &amount);

    int tmp = splice(array, &size, pos, amount);
    if(tmp == 0){
        printf("\nVi tri xoa khong hop li");
    }else{
        printf("\nMang sau khi xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
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
