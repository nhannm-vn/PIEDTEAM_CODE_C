#include <stdio.h>
#include <stdlib.h>
/*
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
void arrangeArr(int array[], int size);
int findArr(int array[], int size, int k);
int main()
{
    int array[100];
    int size = 0;
    int k = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nNhap vao k: ");
    scanf("%d", &k);

    int tmp = findArr(array, size, k);
    if(tmp == 0){
        printf("\nK khong phu hop");
    }else{
        printf("\nso lon thu %d la: %d", k, tmp);
    }
    return 0;
}
int findArr(int array[], int size, int k){
    if(k > size || k <= 0){
        return 0;
    }
    arrangeArr(array, size);
    int site = k - 1;
    return array[site];

}
void arrangeArr(int array[], int size){
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
