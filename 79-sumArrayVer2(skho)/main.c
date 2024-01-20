#include <stdio.h>
#include <stdlib.h>
//Nhập vào một mảng, tính tổng các phần tử có số cuối chính phương
//đầu là nguyên tố thì tính tổng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkCP(int n);
int checkPrime(int n);
int findFirstNumber(int n);
int findLastNumber(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu trong mang la: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac phan tu thoa: %d", sumArray(arrMain, sizeMain));
    return 0;
}
int sumArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int firstNumber = findFirstNumber(array[i]);
        int lastNumber = findLastNumber(array[i]);
        if(checkCP(lastNumber) == 1 && checkPrime(firstNumber) == 1){
            result += array[i];
        }
    }
    return result;
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
int findLastNumber(int n){
    return n % 10;
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
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return 0;
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++)
        {
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
