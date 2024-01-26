#include <stdio.h>
#include <stdlib.h>
/*
 Bài 2: compareArray: so sánh mảng
    hàm nhận vào arr1[], arr2[]
    so sánh 2 mảng return 1 arr1 > arr2
                         -1 arr1 < arr2
                          0 arr1 == arr2
    arr1 2 1 5 7
    arr2 2 1 3 7 6 9 => arr1 lớn hơn => return 1
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int compareArray(int arr1[], int size1, int arr2[], int size2);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;

    inputArray(arr1, &size1);
    printf("\nCac phan tu arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu arr2: ");
    outputArray(arr2, size2);

    int result = compareArray(arr1, size1, arr2, size2);
    if(result){
        printf("\narr1 > arr2");
    }else if(result == -1){
        printf("\narr1 < arr2");
    }else{
        printf("\narr1 = arr2");
    }
    return 0;
}
int compareArray(int arr1[], int size1, int arr2[], int size2){
    //phải lấy mảng nhỏ đi so sánh nếu k sẽ so sánh với rác
    int size;
    if(size1 > size2){
        size = size1;
    }else{
        size = size2;
    }
    for(int i = 0; i <= size - 1; i++){//so sánh giá tri của từng cặp trước
        if(arr1[i] > arr2[i]){
            return 1;
        }else if(arr1[i] < arr2[i]){
            return -1;
        }
    }
    //Nếu giá trị bằng nhau thì ss độ dài
    if(size1 > size2){
        return 1;
    }else if(size1 < size2){
        return -1;
    }else{
        return 0;
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
