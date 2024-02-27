#include <stdio.h>
#include <stdlib.h>
//câu 6: Tính tổng các giá trị có chữ số
//đầu tiên là số chính phương trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkCP(int n);
int findFirstElement(int n);
int sumArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nTong la: %d", sumArray(array, size));
    return 0;
}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = findFirstElement(array[i]);
        if(checkCP(tmp) == 1){
            sum += array[i];
        }
    }
    return sum;
}
int findFirstElement(int n){
    int tmp = n;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            return rye;
        }
    }
}
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }
    return 0;
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
