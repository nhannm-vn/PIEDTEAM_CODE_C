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
void reverseArrayVer1(int arr1[], int size1, int arrTmp[], int *sizeTmp);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arrTmp[100];
    int sizeTmp = 0;

    inputArray(arr1, &size1);
    printf("\nCac phan tu: ");
    outputArray(arr1, size1);

    reverseArrayVer1(arr1, size1, arrTmp, &sizeTmp);
    printf("\nMang sau khi dao nguoc: ");
    outputArray(arrTmp, sizeTmp);
    return 0;
}
void reverseArrayVer1(int arr1[], int size1, int arrTmp[], int *sizeTmp){
    *sizeTmp = 0;
    for(int i = size1 - 1; i >= 0; i--){
        arrTmp[*sizeTmp] = arr1[i];
        (*sizeTmp)++;
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
