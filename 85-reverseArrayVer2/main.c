#include <stdio.h>
#include <stdlib.h>
/*
reverseArray: đảo ngược mảng
+hàm nhận vào một mảng duy nhất sau xử lí mảng đó bị đảo ngược
c1: nhét
c2: swap đối xứng
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void reverseArrayV2(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu trong mang la: ");
    outputArray(arrMain, sizeMain);

    reverseArrayV2(arrMain, sizeMain);
    printf("\nMang sau khi doi nguoc la: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void reverseArrayV2(int array[], int size){
    for(int i = 0; i <= (size - 1)/2; i++){
        int tmp = 0;
        tmp =  array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;
    }
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
