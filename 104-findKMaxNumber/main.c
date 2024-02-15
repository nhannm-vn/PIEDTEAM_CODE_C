#include <stdio.h>
#include <stdlib.h>
/*
Xác định số lớn thứ k:
Viết một hàm để xác định số lớn thứ k trong một mảng.
Ví dụ tìm số lớn nhất thứ 3 trong mảng
Trong mảng thì có số lớn nhất là số 9 rồi đến số 8 rồi đến thứ 7
Vậy số lớn nhất thứ 3 là thứ 7
Input : 1 2 3 3 4 6 7 8 4 5 9
Output: 7
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrangeArray(int array[], int size);
int findKInArray(int array[], int size, int k);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int k = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nNhap vao k: ");
    scanf("%d", &k);

    int tmp = findKInArray(arrMain, sizeMain, k);
    if(tmp == 0){
        printf("\nK khong phu hop");
    }else{
        printf("\n%d", tmp);
    }
    return 0;
}
int findKInArray(int array[], int size, int k){
    arrangeArray(array, size);
    if(k > size || k < 1){
        return 0;
    }else{
        return array[k - 1];
    }
}
void arrangeArray(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[j] > array[i]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
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
