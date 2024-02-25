#include <stdio.h>
#include <stdlib.h>
//tìm mảng trong mảng
/*
Viết hàm tìm mảng con trong mảng chính và in ra vị trí mảng con trong mảng chính đó,
nếu không in ra màn hình “Can not Found !”
Phần mềm cho phép nhập mảng chính và mảng con ( 8p )
Ví dụ

- Mảng Chính: 123123456
- Mảng Phụ: 1234
- Output: 3
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nMang arrMain ne: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nMang arrSub ne: ");
    outputArray(arrSub, sizeSub);

    int result = arrInArr(arrMain, sizeMain, arrSub, sizeSub);
    if(result == -1){
        printf("\nCan not Found !");
    }else{
        printf("\nVi tri la: %d", result);
    }
    return 0;
}
int arrInArr(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == arrSub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arrMain[i + j] != arrSub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
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
