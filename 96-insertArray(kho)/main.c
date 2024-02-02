#include <stdio.h>
#include <stdlib.h>
/*
insertArray: nhét một số vào vị trí nào đó trong mảng
     nhiệm vụ: hàm nhận vào một vị trí và key. Nhét key vào vị trí thứ pos trong
     mảng
insertArray(arr[], pos, key)
nhét key vào vị trí pos trong mảng
arr: 2 4 6 8 10   pos: 2, key: 9
i  : 0 1 2 3 4
=>
arr: 2 4 9 6 8 10
i  : 0 1 2 3 4 5

1 2 3 4
2 3 4 5 6
*/
//Xóa mảng thì duyệt xuôi, chèn thì duyệt ngược
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int insertArray(int array[], int *size, int pos, int key);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int key = 0;
    int pos = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao vi tri: ");
    scanf("%d", &pos);

    printf("\nNhap vao gia tri chen: ");
    scanf("%d", &key);

    int result = insertArray(arrMain, &sizeMain, pos, key);
    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMang sau khi chen: ");
        outputArray(arrMain, sizeMain);
    }
    return 0;
}
int insertArray(int array[], int *size, int pos, int key){
    if(pos < 0 || pos > *size){
        return 0 ;
    }else{
        for(int i = *size - 1; i >= pos; i--){
            array[i + 1] = array[i];
        }
        array[pos] = key;
        (*size)++;
        return 1;
    }
}
void outputArray(int array[],int size){
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
