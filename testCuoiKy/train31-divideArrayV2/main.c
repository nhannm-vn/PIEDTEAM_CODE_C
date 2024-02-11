#include <stdio.h>
#include <stdlib.h>
//Hàm nhận vào 3 mảng, và 1 vị trí arrMain cắt ra 2 khúc
//Khúc đầu arrSub1 nắm
//Khúc sau arrSub2 nắm
//in ra arrMain không đổi
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int divideArrayV2(int arrMain[], int sizeMain, int arrSub1[],
                  int *sizeSub1, int arrSub2[], int *sizeSub2, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int pos = 0;
    int arrSub1[100];
    int sizeSub1 = 0;
    int arrSub2[100];
    int sizeSub2 = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao vi tri can chia: ");
    scanf("%d", &pos);

    int tmp = divideArrayV2(arrMain, sizeMain, arrSub1, &sizeSub1, arrSub2, &sizeSub2, pos);
    if(tmp == 0){
        printf("\nKhong chia duoc");
    }else{
        printf("\nSau khi chia: ");
        printf("\narrMain: ");
        outputArray(arrMain, sizeMain);
        printf("\narrSub1: ");
        outputArray(arrSub1, sizeSub1);
        printf("\narrSub2: ");
        outputArray(arrSub2, sizeSub2);
    }
    return 0;
}
int divideArrayV2(int arrMain[], int sizeMain, int arrSub1[],
                  int *sizeSub1, int arrSub2[], int *sizeSub2, int pos){
    if(pos > sizeMain - 1 || pos <= 0){
        return 0;
    }else{
        for(int i = 0; i < pos; i++){
            arrSub1[*sizeSub1] = arrMain[i];
            (*sizeSub1)++;
        }
        for(int i = pos; i <= sizeMain - 1; i++){
            arrSub2[*sizeSub2] = arrMain[i];
            (*sizeSub2)++;
        }
        return 1;
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
