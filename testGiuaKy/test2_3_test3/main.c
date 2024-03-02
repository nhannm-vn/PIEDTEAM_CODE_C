#include <stdio.h>
#include <stdlib.h>
/*
2. viết hàm splice nhận vào 1 mảng, 1 số nguyên pos và amount.
Hàm xóa mảng từ vị trí pos amount phần tử.
Xóa thành công thì return 1, thất bại thì return 0
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int splice(int array[], int *size, int pos, int amount);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    int amount = 0;
    printf("\nNhap vao amount: ");
    scanf("%d", &amount);
    int result = splice(array, &size, pos, amount);
    if(result == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos >= *size ){
        return 0;
    }
    for(int i = pos; i <= *size - 1 - amount; i++){
        array[i] = array[i + amount];
    }
    amount = *size - pos >= amount ? amount : *size - pos;
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
