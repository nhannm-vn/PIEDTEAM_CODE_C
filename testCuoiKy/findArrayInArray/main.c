#include <stdio.h>
#include <stdlib.h>
/*
Viết chương trình nhận vào 2 mảng A và B
Tìm ví trí xuất hiện đầu tiên của mảng B trong mảng A
Input :
Mảng A : 114512345123123
Mảng B : 123
Output :
Vị trí xuất hiện đầu tiên : 4
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findIndexArray(int arrA[], int sizeA, int arrB[], int sizeB);
int main()
{
    int arrA[100];
    int sizeA = 0;
    int arrB[100];
    int sizeB = 0;
    inputArray(arrA, &sizeA);
    printf("\nCac gia tri cua mang la: ");
    outputArray(arrA, sizeA);

    inputArray(arrB, &sizeB);
    printf("\nCac gia tri cua mang la: ");
    outputArray(arrB, sizeB);

    int tmp = findIndexArray(arrA, sizeA, arrB, sizeB);
    if(tmp == 0){
        printf("\nMang khong tim thay");
    }else{
        printf("\nVi tri la: %d", tmp);
    }

    return 0;
}
int findIndexArray(int arrA[], int sizeA, int arrB[], int sizeB){
    for(int i = 0; i <= sizeA - 1; i++){
        if(arrA[i] == arrB[0]){
            int k = 0;
            for(int j = 0; j <= sizeB - 1; j++){
                if(arrA[i+j] == arrB[j]){
                    k++;
                }
            }
            if(k == sizeB){
                return i;
            }
        }
    }
    return 0;
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
