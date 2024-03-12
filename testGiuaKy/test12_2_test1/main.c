#include <stdio.h>
#include <stdlib.h>
//removeDuplicateV2
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int search(int array[], int size, int key);
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
        printf("\nMang khong co trung");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int removeDuplicate(int array[], int *size){
    int count = 0;
    int sub[100];
    int sizeSub = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(search(sub, sizeSub, array[i]) == -1){
            sub[sizeSub] = array[i];
            sizeSub++;
        }else{
            count++;
        }
    }
    *size = 0;
    for(int i = 0; i <= sizeSub - 1; i++){
        array[*size] = sub[i];
        (*size)++;
    }
    return count;
}
int search(int array[], int size, int key){
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
