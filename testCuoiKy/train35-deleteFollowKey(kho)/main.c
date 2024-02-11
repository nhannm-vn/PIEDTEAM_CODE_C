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
void deleteArray(int array[], int *size, int pos);
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int deleteKey(int array[], int *size, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    int key = 0;
    printf("\nNhap vao key: ");
    scanf("%d", &key);

    int tmp = deleteKey(arrMain, &sizeMain, key);
    if(tmp == 0){
        printf("\nKhong co key de xoa");
    }else{
        printf("\nMang sau khi xoa: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int deleteKey(int array[], int *size, int key){
    int flag = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            flag = 1;
        }
    }
    if(flag == 0){
        return 0;
    }else{
        for(int i = 0; i <= *size - 1; i++){
            if(array[i] == key){
                deleteArray(array, size, i);
                i--;
            }
        }
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
