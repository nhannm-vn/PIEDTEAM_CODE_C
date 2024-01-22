#include <stdio.h>
#include <stdlib.h>
/*
concatV1: nối mảng. Hàm nhận vào mảng 1 mảng 2 và mảng 3 và
có 3 kích thước. Sau xử lí mảng 1 không đổi, mảng 2 không đổi
mảng 3 là mảng 1 cộng mảng 2
+b1: xóa mảng 3
+b2: nhét mảng 1 vào 3
+b3: nhét mảng 2 vào 3
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void concatArrayV1(int arr1[], int size1, int arr2[],
                   int size2, int arr3[], int *size3);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    int arr3[100];
    int size3 = 0;

    inputArray(arr1, &size1);
    printf("\nCac phan tu cua arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu cua arr2: ");
    outputArray(arr2, size2);

    inputArray(arr3, &size3);
    printf("\nCac phan tu cua arr3: ");
    outputArray(arr3, size3);

    concatArrayV1(arr1, size1, arr2, size2, arr3, &size3);
    printf("\nCac mang lan luot sau khi bien doi");
    printf("\nMang arr1: ");
    outputArray(arr1, size1);

    printf("\nMang arr2: ");
    outputArray(arr2, size2);

    printf("\nMang arr3: ");
    outputArray(arr3, size3);
    return 0;
}
void concatArrayV1(int arr1[], int size1, int arr2[],
                   int size2, int arr3[], int *size3){
    *size3 = 0;
    for(int i = 0; i <= size1 - 1; i++){//Nhét mảng 1 vào mảng 3 trống
        arr3[*size3] = arr1[i];
        (*size3)++;
    }
    for(int i = 0; i <= size2 - 1; i++){//Nhét mảng 2 vào tiếp tục mảng 3
        arr3[*size3] = arr2[i];
        (*size3)++;
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
