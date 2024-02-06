#include <stdio.h>
#include <stdlib.h>
//•	Viết hàm tính trung bình cộng của các phần từ trong mảng ( 6p )
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
float tbCong(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTbc array la: %f", tbCong(arrMain, sizeMain));
    return 0;
}
float tbCong(int array[], int size){
    int tong = 0;
    int count = 0;
    for(int i = 0; i <= size - 1; i++){
        tong += array[i];
        count++;
    }
    return (float)tong/count;
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
