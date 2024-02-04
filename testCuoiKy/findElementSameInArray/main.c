#include <stdio.h>
#include <stdlib.h>
//Viết một hàm để tìm các phần tử chung giữa hai mảng.
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteArray(int array[], int *size, int pos);
void findElementSame(int arr1[], int size1, int arr2[], int *size2, int arrTmp[], int *sizeTmp);
int main()
{
    int arr1[100];
    int size1 = 0;
    int arr2[100];
    int size2 = 0;
    int arrTmp[100];
    int sizeTmp = 0;
    inputArray(arr1, &size1);
    printf("\nCac phan tu arr1: ");
    outputArray(arr1, size1);

    inputArray(arr2, &size2);
    printf("\nCac phan tu arr2: ");
    outputArray(arr2, size2);

    findElementSame(arr1, size1, arr2, &size2, arrTmp, &sizeTmp);
    if(sizeTmp == 0){
        printf("\nKhong co phan tu chung");
    }else{
        printf("\nCac phan tu chung cua hai mang la: ");
        outputArray(arrTmp, sizeTmp);
    }
    return 0;
}
void findElementSame(int arr1[], int size1, int arr2[],
                     int *size2, int arrTmp[], int *sizeTmp){
    for(int i = 0; i <= size1 - 1; i++){
        for(int j = 0; j <= *size2 - 1; j++){
            if(arr1[i] == arr2[j]){
                arrTmp[*sizeTmp] = arr1[i];
                (*sizeTmp)++;
                deleteArray(arr2, size2, j);//nếu không xóa thì nó sẽ bị tình trạng phần tử giống trùng nhau
            }
        }
    }
}
void deleteArray(int array[], int *size, int pos){
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
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
