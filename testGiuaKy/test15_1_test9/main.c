#include <stdio.h>
#include <stdlib.h>
//sumprime in array
int inputArray(int array[], int *size);
int outputArray(int array[], int size);
int checkPrime(int n);
int sumPrime(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac so nguyen to: %d", sumPrime(arrMain, sizeMain));
    return 0;
}
int sumPrime(int array[], int size){
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
int outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
int inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
