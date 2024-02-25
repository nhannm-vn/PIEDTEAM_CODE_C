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
int removeKeyInArrV2(int array[], int *size, int key);
int main()
{
    int array[100];
    int size = 0;
    int key = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int result = removeKeyInArrV2(array, &size, key);
    if(result == 0){
        printf("\namount ne: %d", result);
        printf("\nKhong tim thay key");
    }else{
         printf("\namount ne: %d", result);
         printf("\nMang sau xu li: ");
         outputArray(array, size);
    }
    return 0;
}
int removeKeyInArrV2(int array[], int *size, int key){
    int arrTmp[100];
    int sizeTmp = 0;
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] != key){
            arrTmp[sizeTmp] = array[i];
            sizeTmp++;
        }else{
            count++;
        }
    }
    *size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[*size] = arrTmp[i];
        (*size)++;
    }
    return count;
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
