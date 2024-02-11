#include <stdio.h>
#include <stdlib.h>
/*
checkAnna: kiểm tra một mảng có phải đối xứng hay không//
(có thể lật ngược rồi so sánh lại)
arr: 2 3 4 3 2 return 1
arr: 2 3 4 4 3 2 return 1
arr: 2 3 4 2 3 return 0
*/
int checkAnna(int array[], int size);
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    int tmp = checkAnna(array, size);
    if(tmp == 0){
        printf("\nKhong phai anna");
    }else{
        printf("\nLa anna do");
    }
    return 0;
}
int checkAnna(int array[], int size){
    for(int i = 0; i <= (size/2) - 1; i++){
        if(array[i] != array[size - 1 - i]){
            return 0;
        }
    }
    return 1;
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
