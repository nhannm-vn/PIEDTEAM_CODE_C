#include <stdio.h>
#include <stdlib.h>
//Nhập vào một mảng, tính tổng các phần tử có số cuối chính phương
//đầu là nguyên tố thì tính tổng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkCP(int n);
int checkPrime(int n);
int firstNumber(int n);
int lastNumber(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong thoa: %d", sumArray(arrMain, sizeMain));

    return 0;
}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int fNumber = firstNumber(array[i]);
        int lNumber = lastNumber(array[i]);
        if(checkCP(lNumber) == 1 && checkPrime(fNumber) == 1){
            sum += array[i];
        }
    }
    return sum;
}
int lastNumber(int n){
    return n % 10;
}
int firstNumber(int n){
    int rye = 0;
    int tmp = n;
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            return rye;
        }
    }
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
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
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
