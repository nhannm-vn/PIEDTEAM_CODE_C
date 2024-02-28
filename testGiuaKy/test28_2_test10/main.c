#include <stdio.h>
#include <stdlib.h>
//insertArrInToArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertArrInArr(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nMang ne: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nMang ne: ");
    outputArray(arrSub, sizeSub);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    int tmp = insertArrInArr(arrMain, &sizeMain, arrSub, sizeSub, pos);
    if(tmp == 0){
        printf("\nVi tri khong phu hop");
    }else{
        printf("\nMang sau xu li: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int insertArrInArr(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos){
    if(pos < 0 || pos > *sizeMain){
        return 0;
    }
    for(int i = *sizeMain - 1; i >= pos; i--){
        arrMain[i + sizeSub] = arrMain[i];
    }
    (*sizeMain) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        arrMain[pos + i] = arrSub[i];
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
