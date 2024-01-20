#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int sumElement(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nTong: %d", sumArray(arrMain, sizeMain));

    return 0;
}
int sumArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = array[i];
        int k = sumElement(tmp);
        if(k > 9){
            k = sumElement(k);
        }
        if(checkPrime(k)){
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}