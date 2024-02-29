#include <stdio.h>
#include <stdlib.h>
/*
# Delete Element In Array

Viết hàm cho phép nhận vào: phần tử cần xóa ( element )
số lượng ( amount ), chiều ( Dimension ) , và mảng chính
Hàm Xóa một số lượng các phần tử theo chiều mà người dùng nhập vào ! ( 15p )
Dimension ( Số nguyên ): 1 và -1
Ví dụ
- Mảng Chính 1323343323
- Với Element: 3, Dimension 1, Amount 5
- Output: 12423
- Với Element: 3, Dimension -1, Amount 4
- Output: 132342

*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleElementByPos(int array[], int *size, int pos);
void deleElementFolowDi(int array[], int *size, int element, int dimension, int amount);
int main()
{
    int array[100];
    int size = 0;
    int element = 0;
    int dimension = 0;
    int amount = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nNhap vao element: ");
    scanf("%d", &element);

    printf("\nNhap vao dimension: ");
    scanf("%d", &dimension);

    printf("\nNhap vao amount: ");
    scanf("%d", &amount);

    deleElementFolowDi(array, &size, element, dimension, amount);
    printf("\nMang sau xu li: ");
    outputArray(array, size);
    return 0;
}
void deleElementFolowDi(int array[], int *size,
                        int element, int dimension, int amount){
    if(dimension == 1){
        int count = 0;
        for(int i = 0; i <= *size - 1; i++){
            if(array[i] == element){
                deleElementByPos(array, size, i);
                i--;
                count++;
            }
            if(count == amount){
                return 1;
            }
        }

    }else{
        int count = 0;
        for(int i = *size - 1; i >= 0; i--){
            if(array[i] == element){
                deleElementByPos(array, size, i);
                count++;
            }
            if(count == amount){
                return 1;
            }
        }
    }
}

void deleElementByPos(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    (*size)--;
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
