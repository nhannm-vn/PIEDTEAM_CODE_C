#include <stdio.h>
#include <stdlib.h>
//removeDuplicate
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteElementByPos(int array[], int *size, int pos);
int removeDuplicate(int array[], int *size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int amount = removeDuplicate(array, &size);
    if(amount == 0){
        printf("\namount: %d", amount);
        printf("\nMang khong co trung");
    }else{
        printf("\namount: %d", amount);
        printf("\nMang sau xu li ne: ");
        outputArray(array, size);
    }
    return 0;
}
int removeDuplicate(int array[], int *size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i+1; j <= *size - 1; j++){
            if(array[i] == array[j]){
                deleteElementByPos(array, size, j);
                j--;
                count++;
            }
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
