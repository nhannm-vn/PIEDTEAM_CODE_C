#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertSubInArr(int array[], int *size, int sub[], int sizeSub, int pos);
int main()
{
    int array[100];
    int size = 0;
    int sub[100];
    int sizeSub = 0;
    int pos = 0;
    inputArray(array, &size);
    printf("\nCac phan tu array: ");
    outputArray(array, size);

    inputArray(sub, &sizeSub);
    printf("\nCac phan tu sub: ");
    outputArray(sub, sizeSub);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    int tmp = insertSubInArr(array, &size, sub, sizeSub, pos);
    if(tmp == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(array, size);
    }
    return 0;
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
        array[i+pos] = sub[i];
    }
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
