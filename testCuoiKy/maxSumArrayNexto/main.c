#include <stdio.h>
#include <stdlib.h>
/*
Tìm dãy con liên tiếp trong mảng có tổng lớn nhất.
Input: 1 2 3 1 2 4 5 6 2 3 6 7 8 4 3
Mảng con lớn nhất: 6 7 8
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int maxArrayInArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu trong mang la: ");
    outputArray(array, size);

    printf("\nMang lien tiep lon nhat la: %d", maxArrayInArray(array, size));

    return 0;
}
int maxArrayInArray(int array[], int size){
    int maxArray = array[0] + array[1];
    int sum = 0;
    for(int i = 0; i <= size - 2; i++){
        sum = 0;
        for(int j = i + 1; j <= size - 1; j++){
            sum += array[j];
            if(array[i] + sum > maxArray){
                maxArray = array[i] + sum;
            }
        }
    }
    return maxArray;
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
