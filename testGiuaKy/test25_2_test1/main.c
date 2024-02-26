#include <stdio.h>
#include <stdlib.h>
// 9 7 -9 12 6 -5 -6 ==> 25
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findSumArrayMax(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nmax la: %d", findSumArrayMax(array, size));
    return 0;
}
int findSumArrayMax(int array[], int size){
    int max = array[1] + array[0];
    for(int i = 0; i <= size - 2; i++){
        int tmp = 0;
        for(int j = i+1; j <= size - 1; j++){
            tmp += array[j];
            if(max < array[i] + tmp){
                max = array[i] + tmp;
            }
        }
    }
    return max;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
