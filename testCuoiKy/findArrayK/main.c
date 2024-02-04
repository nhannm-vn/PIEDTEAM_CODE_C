#include <stdio.h>
#include <stdlib.h>
/*
Viết một hàm để xác định số lớn thứ k trong một mảng.
Ví dụ tìm số lớn nhất thứ 3 trong mảng. Trong mảng thì có
số lớn nhất là số 9 rồi đến số 8 rồi đến thứ 7. Vậy số lớn nhất thứ 3 là thứ 7
Input : 1 2 3 3 4 6 7 8 4 5 9
Output: 7
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findKarray(int array[], int size, int k);
int main()
{
    int array[100];
    int size = 0;
    int k = 0;

    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);
    printf("\nNhap vao vi tri thu k: ");
    scanf("%d", &k);

    printf("\nPhan tu lon thu %d trong mang la: %d", k, findKarray(array, size, k));
    return 0;
}
int findKarray(int array[], int size, int k){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] < array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for(int i = 0; i <= size - 1; i++){
        if(i == k - 1){
            return array[i];
        }
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
