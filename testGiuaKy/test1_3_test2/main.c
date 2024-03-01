#include <stdio.h>
#include <stdlib.h>
//insertArrInArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertArrInToArr(int array[], int *size, int sub[], int sizeSub, int pos);
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
    int pos = 0;
    printf("\nNhap vao pos: ");
    scanf("%d", &pos);
    int result = insertArrInToArr(array, &size, sub, sizeSub, pos);
    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }

    return 0;
}
int insertArrInToArr(int array[], int *size, int sub[], int sizeSub, int pos){
    if(pos < 0 || pos > *size){
        return 0;
    }
    for(int i = *size - 1; i >= pos; i--){
        array[i + sizeSub] = array[i];
    }
    (*size) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        array[pos + i] = sub[i];
    }
    return 1;
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
