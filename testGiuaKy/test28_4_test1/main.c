#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phân tử là số nguyên tố trong array
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int sumPrime(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nTong cac so nguyen to trong mang ne: ");
    printf("%d", sumPrime(array, size));


    return 0;
}
int sumPrime(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
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
