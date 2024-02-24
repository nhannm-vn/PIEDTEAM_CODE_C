#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int searchArray(int array[], int size, int key);
int removeDuplicateV1(int array[], int *size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int amount = removeDuplicateV1(array, &size);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nMang khong co trung");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int removeDuplicateV1(int array[], int *size){
    int arrTmp[100];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(searchArray(arrTmp, sizeTmp, array[i]) == -1){
            arrTmp[sizeTmp] = array[i];
            sizeTmp++;
        }else{
            count++;
        }
    }
    *size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[*size] = arrTmp[i];
        (*size)++;
    }

    return count;

}
int searchArray(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
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
