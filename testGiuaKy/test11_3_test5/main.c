#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm tính tổng các số mà nếu tổng các chữ số
đến khi còn một chữ số là số nguyên tố
vd: 23 185 129 24 32 15 ==>369
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int sumElement(int n);
int sumElementInArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nket qua ne ku: %d", sumElementInArr(array, size));
    return 0;
}
int sumElementInArr(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int sum = sumElement(array[i]);
        if(sum >= 10){
            sum = sumElement(sum);
        }
        if(checkPrime(sum) == 1){
            result += array[i];
        }
    }
    return result;
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
