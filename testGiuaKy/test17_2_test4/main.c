#include <stdio.h>
#include <stdlib.h>
//Nhập vào một mảng, tính tổng các phần tử có số cuối chính phương
//đầu là nguyên tố thì tính tổng
//11 21 9 7 574 90 119 --> 595
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int checkCP(int n);
int findFirstNumber(int n);
int findLastNumber(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong la: %d", sumArray(arrMain, sizeMain));
    return 0;
}
int sumArray(int array[], int size){
    int firstNumber = 0;
    int lastNumber = 0;
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        firstNumber = findFirstNumber(array[i]);
        lastNumber = findLastNumber(array[i]);
        if(checkPrime(firstNumber) == 1 && checkCP(lastNumber) == 1){
            sum += array[i];
        }
    }
    return sum;
}
int findFirstNumber(int n){
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
int findLastNumber(int n){
    return n % 10;
}
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return 0;
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
