#include <stdio.h>
#include <stdlib.h>
/*
//tìm tổng lớn nhất của dãy con liên tiếp trong mảng
/*
1 3 -5 2 7 6 -2 4 -3 1
output: 17
*/
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findArrayMax(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nMax Array la: %d", findArrayMax(arrMain, sizeMain));

    return 0;
}
int findArrayMax(int array[], int size){
    int sum = 0;
    int maxArray = array[0] + array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            sum += array[j];
            if(maxArray < sum + array[i]){
                maxArray = sum + array[i];
            }
        }
        sum = 0;
    }
    return maxArray;
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
