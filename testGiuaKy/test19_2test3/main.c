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
void deleteArray(int array[], int *size, int pos);
int deleKey(int array[], int *size, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int key = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao key can xoa: ");
    scanf("%d", &key);

    int tmp = deleKey(arrMain, &sizeMain, key);
    if(tmp == 0){
        printf("\nMang khong co key can xoa");
    }else{
        printf("\nMang sau khi xoa la: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int deleKey(int array[], int *size, int key){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            deleteArray(array, size, i);
            i--;
            count++;
        }
    }
    if(count == 0){
        return 0;
    }else{
        return 1;
    }
}
void deleteArray(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
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
