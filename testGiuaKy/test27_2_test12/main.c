#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm tính tổng các số mà nếu tổng các chữ số
đến khi còn một chữ số là số nguyên tố
vd: 23 185 129 24 32 15 ==>369
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int sumElement(int n);
int sumArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);
    printf("\nTong la: %d", sumArray(array, size));

    return 0;
}
int sumArray(int array[], int size){
    int tong = 0;
    for(int i = 0; i <= size - 1; i++){
        int rye = sumElement(array[i]);
        if(rye > 9){
            rye = sumElement(rye);
        }
        if(checkPrime(rye) == 1){
            tong += array[i];
        }
    }
    return tong;
}
int sumElement(int n){
    int sum = 0;
    int rye = 0;
    int tmp = n;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
