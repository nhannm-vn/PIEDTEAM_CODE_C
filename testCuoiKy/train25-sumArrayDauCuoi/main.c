#include <stdio.h>
#include <stdlib.h>
//Nhập vào một mảng, tính tổng các phần tử có số cuối chính phương
//đầu là nguyên tố thì tính tổng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int firstNumber(int n);
int lastNumber(int n);
int checkPrime(int n);
int checkCP(int n);
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
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(firstNumber(array[i])) == 1 && checkCP(lastNumber(array[i])) == 1){
            sum += array[i];
        }
    }
    return sum;
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
int lastNumber(int n){
    return n % 10;
}
int firstNumber(int n){
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
