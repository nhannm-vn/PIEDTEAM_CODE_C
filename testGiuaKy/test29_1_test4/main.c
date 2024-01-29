#include <stdio.h>
#include <stdlib.h>
/*
•	Viết chương trình nhận vào 2 mảng A và B
Chèn mảng B vào vị trí thứ sizeA - 2 trong mảng A ( 7p )
Input:
Mảng A : 12312312345 size 11
Mảng B : 000
SizeA - 2 = 11 - 2 = 9
Output :
Mảng A : 12312312300045
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void changeArray(int arrA[], int *sizeA, int arrB[], int sizeB);
int main()
{
    int arrA[100];
    int sizeA = 0;
    int arrB[100];
    int sizeB = 0;
    inputArray(arrA, &sizeA);
    printf("\nCac phan tu arrA: ");
    outputArray(arrA, sizeA);

    inputArray(arrB, &sizeB);
    printf("\nCac phan tu arrB: ");
    outputArray(arrB, sizeB);

    changeArray(arrA, &sizeA, arrB, sizeB);
    printf("\nMang A moi: ");
    outputArray(arrA, sizeA);
    return 0;
}
void changeArray(int arrA[], int *sizeA, int arrB[], int sizeB){
    for(int i = *sizeA - 2; i <= *sizeA - 1; i++){
        arrB[sizeB] = arrA[i];
        sizeB++;
    }
    *sizeA -= 2;
    for(int i = 0; i <= sizeB - 1; i++){
        arrA[*sizeA] = arrB[i];
        (*sizeA)++;
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
