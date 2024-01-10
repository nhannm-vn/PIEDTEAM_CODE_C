#include <stdio.h>
#include <stdlib.h>

/*
Viết hàm nhận vào các giá trị của mảng và hàm xuất ra
*/
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);

    printf("\nIn mang ra: ");
    outputArray(arrMain, sizeMain);


    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
