#include <stdio.h>
#include <stdlib.h>
//delSubInArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int array[], int size, int sub[], int sizeSub);
int splice(int array[], int *size, int pos, int amount);
void delSubInArr(int array[], int *size, int sub[], int sizeSub);
int main()
{
    int array[100];
    int size = 0;
    int sub[100];
    int sizeSub = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    inputArray(sub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(sub, sizeSub);

    delSubInArr(array, &size, sub, sizeSub);
    printf("\nMang sau xu li: ");
    outputArray(array, size);
    return 0;
}
void delSubInArr(int array[], int *size, int sub[], int sizeSub){
    while(splice(array, size, arrInArr(array, *size, sub, sizeSub), sizeSub));
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
