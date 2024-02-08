#include <stdio.h>
#include <stdlib.h>
//tìm tổng lớn nhất của dãy con liên tiếp trong mảng
/*
1 3 -5 2 7 6 -2 4 -3 1
output: 17
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMaxArrayNextTo(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong lien tiep lon nhat: %d", findMaxArrayNextTo(arrMain, sizeMain));
    return 0;
}
int findMaxArrayNextTo(int array[], int size){
    int sum = 0;
    int max = array[0] + array[1];
    for(int i = 0; i <= size - 2; i++){
        sum = 0;
        for(int j = i+1; j <= size - 1; j++){
            sum += array[j];
            if(array[i] + sum > max){
                max = array[i] + sum;
            }
        }
    }
    return max;
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
