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
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int searchArray(int array[], int size, int key);
int removeDuplicate(int array[], int *size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
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
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(searchArray(tmp, sizeTmp, array[i]) == -1){
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }else{
            count++;
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = tmp[i];
    }
    *size = sizeTmp;
    return count;
}
int searchArray(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
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
