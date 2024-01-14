#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phần tử là số nguyên tố trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int number);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri trong mang: ");
    outputArray(arrMain, sizeMain);

    int sum = 0;
    for(int i = 0; i <= sizeMain - 1; i++){
        if(checkPrime(arrMain[i])){
            sum += arrMain[i];
        }
    }
    printf("\nTong cac so nguyen to: %d", sum);

    return 0;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
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
