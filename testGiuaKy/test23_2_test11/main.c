#include <stdio.h>
#include <stdlib.h>
//removeKeyInArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int removeKeyInArray(int array[], int *size, int key);
void deleteElementByPos(int array[], int *size, int pos);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    int key = 0;
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int amount = removeKeyInArray(array, &size, key);
    if(amount == 0){
        printf("\namount: %d", amount);
        printf("\nKhong co key");
    }else{
        printf("\namount: %d", amount);
        printf("\nMang sau khi xoa la: ");
        outputArray(array, size);
    }
    return 0;
}
void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
}
int removeKeyInArray(int array[], int *size, int key){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            deleteElementByPos(array, size, i);
            i--;
            count++;
        }
    }
    return count;
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
