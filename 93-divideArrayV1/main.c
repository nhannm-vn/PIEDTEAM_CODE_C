#include <stdio.h>
#include <stdlib.h>
//hàm nhận vào 2 mảng và một ví trí
//cưa đôi mảng thành 2 phần
//phần đầu giữ nguyên, phần sau gáp vô mảng mới
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void divideArrayV1(int arrMain[], int *sizeMain, int arrSub[], int *sizeSub, int pos);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    int pos = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu arrMain: ");
    outputArray(arrMain, sizeMain);


    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu arrSub: ");
    outputArray(arrSub, sizeSub);

    printf("\nNhap vao vi tri can tach: ");
    scanf("%d", &pos);

    divideArrayV1(arrMain, &sizeMain, arrSub, &sizeSub, pos);

    printf("\nCac phan tu arrMain: ");
    outputArray(arrMain, sizeMain);
    printf("\nCac phan tu arrSub: ");
    outputArray(arrSub, sizeSub);

    return 0;
}
void divideArrayV1(int arrMain[], int *sizeMain, int arrSub[], int *sizeSub, int pos){
    *sizeSub = 0;
    for(int i = pos; i <= *sizeMain - 1; i++){
        arrSub[*sizeSub] = arrMain[i];
        (*sizeSub)++;
    }
    *sizeMain = pos;
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
