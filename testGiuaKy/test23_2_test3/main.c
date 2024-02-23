#include <stdio.h>
#include <stdlib.h>
//findArrayInArray
/*
nhập vào 2 mảng tìm xem mảng con có nằm trong mảng cha hay không
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findArrayInArray(int arrMain[], int sizeMain, int arrSub[], int sizeSub);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrSub[100];
    int sizeSub = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    inputArray(arrSub, &sizeSub);
    printf("\nCac phan tu la: ");
    outputArray(arrSub, sizeSub);

    int tmp = findArrayInArray(arrMain, sizeMain, arrSub, sizeSub);
    if(tmp == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nMang con o vi tri: %d", tmp);
    }
    return 0;
}
int findArrayInArray(int arrMain[], int sizeMain, int arrSub[], int sizeSub){
    for(int i = 0; i <= sizeMain - 1; i++){
        if(arrMain[i] == arrSub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arrMain[i + j] != arrSub[j]){
                    break;
                }else{//nếu kiêm tra được tới j ==  phần tử cuối cùng thì lụm
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
