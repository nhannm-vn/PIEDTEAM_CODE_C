#include <stdio.h>
#include <stdlib.h>
//*B4: xóa 1 mảng sub trong mảng arr
//  arrInArray
//  splice
//  f(arr, pos, amount);
//   trong mảng arr xóa từ pos số lượng amount pt
//  //hậu bối của bài delete
//  arr: 2 4 6 8 10   pos 1  amount: 2
//    i  0 1 2 3 4
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleArray(int array[], int *size, int pos);
int deleteArrayInArray(int array[], int *size, int pos, int amount);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int pos = 0;
    int amount = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &pos);
    printf("\nNhap vao so luong: ");
    scanf("%d", &amount);

    int key = deleteArrayInArray(arrMain, &sizeMain, pos, amount);
    if(key == 0){
        printf("\nVi tri xoa khong hop le");
    }else{
        printf("\nMang sau khi xoa la: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int deleteArrayInArray(int array[], int *size, int pos, int amount){
    if(pos < 0 || pos > *size - 1){
        return 0;
    }else{
        for(int i = 1; i <= amount; i++){
            deleArray(array, size, pos);
        }
    }
}
void deleArray(int array[], int *size, int pos){
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
