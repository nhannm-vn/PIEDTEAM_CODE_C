#include <stdio.h>
#include <stdlib.h>
//Tính tổng các giá trị có chữ số đầu tiên là số chính phương trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int firstNumber(int n);
int checkCP(int n);
int sumElementArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac gia tri la: %d", sumElementArray(arrMain, sizeMain));
    return 0;
}
int sumElementArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = array[i];
        int k = firstNumber(tmp);
        if(checkCP(k)){
            sum += array[i];
        }
    }
    return sum;
}
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return 0;
    }
}
int firstNumber(int n){
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
void outputArray(int array[],int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[],int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
