#include <stdio.h>
#include <stdlib.h>
//B2.2:
//hàm nhận vào 1 mảng
//removeDuplicate: xóa trùng
//   => k còn phần tử nào trùng cả
//   2, 1, 3, 5, 2, 4, 5, 3 => 2 1 3 5 4
//  cách 1:
//  => tìm phần tử trong mảng, copyArray, Nhét
//  arr: 2, 1, 3, 5, 2, 4, 5, 3
//  tmp:
//  duyệt mảng arr xem arr[i]
//      có tồn tại trong tmp k
//      nếu arr[i] k tồn tại trong tmp
//        thì nhét arr[i] vào

//  cách 2:
//  => tìm kiếm, count, delete
//  arr: 2, 1, 3, 5, 2, 4, 5, 3
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteElementByPos(int array[], int *size, int pos);
int removeDuplicate(int array[], int *size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int amount = removeDuplicate(array, &size);
    if(amount == 0){
        printf("\namount ne: %d", amount);
        printf("\nMang khong co trung");
    }else{
        printf("\namount ne: %d", amount);
        printf("\nMang sau khi xu li: ");
        outputArray(array, size);
    }
    return 0;
}
int removeDuplicate(int array[], int *size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i+1; j <= *size - 1; j++){
            if(array[j] == array[i]){
                deleteElementByPos(array, size, j);
                j--;
                count++;
            }
        }
    }

    return count;
}
void deleteElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
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
