#include <stdio.h>
#include <stdlib.h>
//removeKeyInArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteElementByPos(int array[], int *size, int pos);
int removeKey(int array[], int *size, int key);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int amount = removeKey(array, &size, key);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nKhong co key trong mang");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nMang ne: ");
        outputArray(array, size);
    }
    return 0;
}
int removeKey(int array[], int *size, int key){
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

void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
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
