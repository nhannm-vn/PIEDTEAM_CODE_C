#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phân tử là số nguyên tố trong mảng
void inputArray(int array[], int *size);
int sumElementPrime(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nTong cac so nguyen to: %d", sumElementPrime(arrMain, sizeMain));

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
int sumElementPrime(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int isPrime = 1;
        if(array[i] >= 2){
            for(int j = 2; j <= array[i] - 1; j++){
                if(array[i] % j == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                sum += array[i];
            }
        }
    }
    return sum;
}
