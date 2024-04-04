#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int splice(int array[], int *size, int pos, int amount);
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
        printf("\nMang k co trung");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }

    return 0;
}
int removeDuplicate(int array[], int *size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(array[i] == array[j]){
                splice(array, size, j, 1);
                j--;
                count++;
            }
        }
    }
    return count;
}

int splice(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos >= *size){
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
