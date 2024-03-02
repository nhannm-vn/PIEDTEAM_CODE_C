#include <stdio.h>
#include <stdlib.h>
int deleteElementByPos(int array[], int *size, int pos);
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMinInArr(int array[], int size);
int arrInArr(int array[], int size, int sub[], int sizeSub);
int insertArrInArr(int array[], int *size, int pos, int key);
void arrangeArr(int array[], int size);
void reverArr(int array[], int size);
void divideArr(int array[], int *size, int sub[], int *sizeSub, int pos);
int insertSubInArr(int array[], int *size, int sub[], int sizeSub, int pos);
int splice(int array[], int *size, int pos, int amount);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    /*
    int sub[100];
    int sizeSub = 0;
    inputArray(sub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(sub, sizeSub);
    */
    /*
    int result = arrInArr(array, size, sub, sizeSub);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nTai vi tri: %d", result);
    }
    */
    //printf("\nMin la: %d", findMinInArr(array, size));

    int pos = 0;
    //int key = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    //printf("\nNhap vao key: ");
    //scanf("%d", &key);
    /*
    int result = insertSubInArr(array, &size, sub, sizeSub, pos);
    if(result == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    */
    int amount  = 0;
    printf("\nNhap vao amount: ");
    scanf("%d", &amount);
    splice(array, &size, pos, amount);
    printf("\nMang array: ");
    outputArray(array, size);
    //printf("\nMang sub: ");
    //outputArray(sub, sizeSub);

    return 0;
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

int insertSubInArr(int array[], int *size, int sub[], int sizeSub, int pos){
    if(pos < 0 || pos > *size){
        return 0;
    }
    for(int i = *size - 1; i >= pos; i--){
        array[i + sizeSub] = array[i];
    }
    (*size) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        array[i + pos] = sub[i];
    }
    return 1;
}

void divideArr(int array[], int *size, int sub[], int *sizeSub, int pos){
    *sizeSub = 0;
    for(int i = pos; i <= *size - 1; i++){
        sub[*sizeSub] = array[i];
        (*sizeSub)++;
    }
    *size = pos;
}

void reverArr(int array[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
}

void arrangeArr(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] < array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int insertArrInArr(int array[], int *size, int pos, int key){
    if(pos < 0 || pos > *size){
        return 0;
    }
    for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];
    }
    (*size)++;
    array[pos] = key;
    return 1;
}

int arrInArr(int array[], int size, int sub[], int sizeSub){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(array[i+j] != sub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}
int deleteElementByPos(int array[], int *size, int pos){
    if(pos < 0 || pos >= *size){
        return 0;
    }
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
    return 1;
}

int findMinInArr(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
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
