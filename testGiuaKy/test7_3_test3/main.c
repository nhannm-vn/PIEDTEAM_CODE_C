#include <stdio.h>
#include <stdlib.h>
//viet ham nhận vào hai mảng sub và arr hãy so sánh
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int compareArr(int array[], int size, int sub[], int sizeSub);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int sub[100];
    int sizeSub = 0;
    inputArray(sub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(sub, sizeSub);

    int tmp = compareArr(array, size, sub, sizeSub);
    if(tmp == 1){
        printf("\narray > sub");
    }else if(tmp == -1){
        printf("\narray < sub");
    }else{
        printf("\narray = sub");
    }
    return 0;
}
int compareArr(int array[], int size, int sub[], int sizeSub){
    int sizeTmp = 0;
    if(size < sizeSub){
        sizeTmp = size;
    }else{
        sizeTmp = sizeSub;
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        if(array[i] < sub[i]){
            return -1;
        }else if(array[i] > sub[i]){
            return 1;
        }
    }
    if(size > sizeSub){
        return 1;
    }else if(size < sizeSub){
        return -1;
    }else{
        return 0;
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
