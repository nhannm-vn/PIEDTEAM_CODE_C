#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void insertArrayByPos(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu la: ");
    outputArray(arrSub, sizeSub);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    insertArrayByPos(arrMain, &sizeMain, arrSub, sizeSub, pos);
    printf("\nMang sau bien doi: ");
    outputArray(arrMain, sizeMain);
    return 0;
}

void insertArrayByPos(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos){
    for(int i = *sizeMain - 1; i >= pos; i--){
        arrMain[i + sizeSub] = arrMain[i];
    }
    (*sizeMain) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        arrMain[i+ pos] = arrSub[i];
    }
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
