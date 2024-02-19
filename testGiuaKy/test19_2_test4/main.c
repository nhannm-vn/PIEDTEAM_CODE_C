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
int removeDuplicate(int array[], int *size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    int tmp = removeDuplicate(arrMain, &sizeMain);
    if(tmp == 0){
        printf("\nKhong co trung de xoa");
    }else{
        printf("\nMang sau khi xoa la: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int removeDuplicate(int array[], int *size){
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        int k = 0;
        for(int j = 0; j <= sizeTmp - 1; j++){
            if(arrTmp[j] == array[i]){
                k++;
            }
        }
        if(k == 0){
            arrTmp[sizeTmp] = array[i];
            sizeTmp++;
        }
    }
    if(sizeTmp == *size){
        return 0;
    }else{
        *size = 0;
        for(int i = 0; i <= sizeTmp - 1; i++){
            array[*size] = arrTmp[i];
            (*size)++;
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
