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
void reverArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    reverArray(array, size);
    printf("\nMang sau xu li: ");
    outputArray(array, size);
    return 0;
}
void reverArray(int array[], int size){
    for(int i = 0; i <= size/2 - 1; i++){
        int tmp = array[i];
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
    printf("\nNhap vao kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
