#include <stdio.h>
#include <stdlib.h>
//arrInArr
/*
arr  : 2 3 2 1 3 2 5 2 2
    index: 0 1 2 3 4 5 6 7 8
    key  : 2 5
    return 5
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(arrSub, sizeSub);

    int result = arrInArr(arrMain, sizeMain, arrSub, sizeSub);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri la: %d", result);
    }
    return 0;
}
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == arrSub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arrMain[i+j] != arrSub[j]){
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
