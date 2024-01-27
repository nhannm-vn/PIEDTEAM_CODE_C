#include <stdio.h>
#include <stdlib.h>
//Hàm nhận vào 3 mảng, và 1 vị trí arrMain cắt ra 2 khúc
//Khúc đầu arrSub1 nắm
//Khúc sau arrSub2 nắm
//in ra arrMain không đổi
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void divideArrayV2(int arrMain[], int sizeMain, int arrSub1[], int *sizeSub1
                   , int arrSub2[], int *sizeSub2, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub1[100];
    int sizeSub1 = 0;
    int arrSub2[100];
    int sizeSub2 = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu arrMain: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub1, &sizeSub1);
    printf("\nCac phan tu arrSub1: ");
    outputArray(arrSub1, sizeSub1);

    inputArray(arrSub2, &sizeSub2);
    printf("\nCac phan tu arrSub2: ");
    outputArray(arrSub2, sizeSub2);

    printf("\nNhap vao pos: ");
    scanf("%d", &pos);

    divideArrayV2(arrMain, sizeMain, arrSub1, &sizeSub1, arrSub2,
                   &sizeSub2, pos);

    printf("\nCac phan tu arrMain: ");
    outputArray(arrMain, sizeMain);
    printf("\nCac phan tu arrSub1: ");
    outputArray(arrSub1, sizeSub1);
    printf("\nCac phan tu arrSub2: ");
    outputArray(arrSub2, sizeSub2);


    return 0;
}
void divideArrayV2(int arrMain[], int sizeMain, int arrSub1[], int *sizeSub1
                   , int arrSub2[], int *sizeSub2, int pos){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    for(int i = 0; i <= pos - 1; i++){
        arrSub1[*sizeSub1] = arrMain[i];
        (*sizeSub1)++;
    }
    for(int i = pos; i <= sizeMain - 1; i++){
        arrSub2[*sizeSub2] = arrMain[i];
        (*sizeSub2)++;
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
