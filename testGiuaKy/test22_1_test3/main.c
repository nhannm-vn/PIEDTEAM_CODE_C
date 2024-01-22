#include <stdio.h>
#include <stdlib.h>
/*
reverseArray: đảo ngược mảng
+hàm nhận vào một mảng duy nhất sau xử lí mảng đó bị đảo ngược
c1: nhét
c2: swap đối xứng
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void reverseArrayVer2(int array[], int size);
void reverseArrayVer1(int array[], int size, int arrayTmp[], int *sizeTmp);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nMang sau khi doi lan 1 la: ");
    reverseArrayVer2(arrMain, sizeMain);
    outputArray(arrMain, sizeMain);
    int arrayTmp[100];
    int sizeTmp = 0;
    reverseArrayVer1(arrMain, sizeMain, arrayTmp, &sizeTmp);
    printf("\nMang doi lan 2 la: ");
    outputArray(arrayTmp, sizeTmp);
    return 0;
}
void reverseArrayVer1(int array[], int size, int arrayTmp[], int *sizeTmp){
    *sizeTmp = 0;
    for(int i = size - 1; i >= 0; i--){
        arrayTmp[*sizeTmp] = array[i];
        (*sizeTmp)++;
    }
}
void reverseArrayVer2(int array[], int size){
    for(int i = 0; i <= (size - 1)/2; i++){
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
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
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
