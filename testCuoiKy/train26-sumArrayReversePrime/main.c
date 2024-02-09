#include <stdio.h>
#include <stdlib.h>
//Nhập vào các phần tử của mảng. Nếu phần tử đó snt
//dao nguoc vẫn là snt thì nhét vào tính tổng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int reverNumber(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong yeu cau: %d", sumArray(arrMain, sizeMain));
    return 0;
}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(reverNumber(array[i])) == 1 && checkPrime(array[i]) == 1){
            sum += array[i];
        }
    }
    return sum;
}
int reverNumber(int n){
    int tmp = n;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    return m;
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
