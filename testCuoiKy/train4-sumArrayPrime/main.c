#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phần tử là số nguyên tố trong mảng ( 6p )
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int sumPrimeArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong cac so nguyen to: %d", sumPrimeArray(arrMain, sizeMain));
    return 0;
}
int sumPrimeArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i])){
            sum += array[i];
        }
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
