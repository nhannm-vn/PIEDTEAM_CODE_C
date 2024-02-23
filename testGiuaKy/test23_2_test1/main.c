#include <stdio.h>
#include <stdlib.h>
//insertArrayInArray
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertArrayInToArray(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos);
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

    int tmp = insertArrayInToArray(arrMain, &sizeMain, arrSub, sizeSub, pos);
    if(tmp == 0){
        printf("\nVi tri chen khong hop li");
    }else{
        printf("\nMang arrMain sau khi chen: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int insertArrayInToArray(int arrMain[], int *sizeMain, int arrSub[], int sizeSub, int pos){
    if(pos < 0 || pos > *sizeMain){
        return 0;
    }
    for(int i = *sizeMain - 1; i >= pos; i--){
        arrMain[i + sizeSub] = arrMain[i];
    }
    *sizeMain += sizeSub;
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
