#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumElement(int n);
int checkPrime(int n);
int sumNumber(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    int result = sumNumber(array, size);
    printf("\nket qua = %d", result);
    return 0;
}
int sumNumber(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = sumElement(array[i]);
        if(tmp > 10){
            tmp = sumElement(tmp);
        }
        if(checkPrime(tmp) == 1){
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
