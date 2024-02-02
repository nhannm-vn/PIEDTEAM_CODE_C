#include <stdio.h>
#include <stdlib.h>
//B2.2:
//hàm nhận vào 1 mảng
//removeDuplicate: xóa trùng
//  => k còn phần tử nào trùng cả
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
void removeDuplicate(int array[], int *size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    removeDuplicate(array, &size);
    printf("\nSau khi xoa la: ");
    outputArray(array, size);
    return 0;
}
void removeDuplicate(int array[], int *size){
    int tmp[100];
    int sizeTmp = 1;
    tmp[0] = array[0];
    for(int i = 0; i <= *size - 1; i++){
        int k = 0;
        for(int j = 0; j <= sizeTmp - 1; j++){//duyet for
            if(array[i] == tmp[j]){
                k++;
            }
        }
        if(k == 0){//phuong phap nhet
            tmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    *size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[*size] = tmp[i];
        (*size)++;
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
