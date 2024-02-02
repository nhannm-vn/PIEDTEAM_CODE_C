#include <stdio.h>
#include <stdlib.h>
//B2.1:
//  xóa hết phần tử thỏa:
//  hàm nhận vào 1 mảng , key
//  x1g
//  => tìm phần tử trong mảng và delete
//  f([3,1,2,3,5,4,3,6], 3) => [1,2,5,4,6]
//  đánh dấu vòng lập(loop, while)
//   C1: hàm delete
//      duyệt arr tìm arr[i] == 3
//      gọi hàm delete xóa phần từ i1
//   C2: arr : [3,1,2,3,5,4,3,6]
//       tmp :
//      nhét arr vào tmp trừ arr[i] == 3
//      cpy tmp vào arr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteArrayAtKey(int array[], int *size, int key);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nCac phan tu mang la: ");
    outputArray(array, size);
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    deleteArrayAtKey(array, &size, key);
    printf("\nMang sau khi xoa la: ");
    outputArray(array, size);
    return 0;
}
void deleteArrayAtKey(int array[], int *size, int key){
    int tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] != key){
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
