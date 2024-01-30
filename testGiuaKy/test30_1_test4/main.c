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
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong: %d", sumArray(arrMain, sizeMain));
    return 0;
}
int sumArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = sumElement(array[i]);
        if(tmp > 9){
            tmp = sumElement(tmp);
        }
        if(checkPrime(tmp)){
            result += array[i];
        }
    }
    return result;
}
int sumElement(int n){
    int tmp = n;
    int rye = 0;
    int sum = 0;
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
