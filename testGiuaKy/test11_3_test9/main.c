#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int splice(int array[], int *size, int pos, int amount);
int removeKeyInArr(int array[], int *size, int key);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    int key = 0;
    printf("\nNhap vao key: ");
    scanf("%d", &key);
    int amount = removeKeyInArr(array, &size, key);
    if(amount == 0){
        printf("\nMang khong tim thay key");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int removeKeyInArr(int array[], int *size, int key){
    int amount = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            splice(array, size, i, 1);
            i--;
            amount++;
        }
    }
    return amount;
}

int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos >= *size){
        return 0;
    }
    for(int i = pos; i <= *size - 1 - amount; i++){
        array[i] = array[i+amount];
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
