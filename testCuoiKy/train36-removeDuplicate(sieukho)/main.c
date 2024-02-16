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
        printf("\nKhong co trung");
    }else{
        printf("\nMang sau khi xoa trung: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int removeDuplicate(int array[], int *size){
    int flag = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i+1; j <= *size - 1; j++){
            if(array[i] == array[j]){
                flag = 1;
            }
        }
    }
    if(flag == 0){
        return 0;
    }else{
        int arrayTmp[100];
        int sizeTmp = 0;
        for(int i = 0; i <= *size - 1; i++){
            int k = 0;
            for(int j = 0; j <= sizeTmp - 1; j++){
                if(arrayTmp[j] == array[i]){
                    k++;
                }
            }
            if(k == 0){
                arrayTmp[sizeTmp] = array[i];
                sizeTmp++;
            }
        }
        *size = 0;
        for(int i = 0; i <= sizeTmp - 1; i++){
            array[*size] = arrayTmp[i];
            (*size)++;
        }
        return 1;
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
