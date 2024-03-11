#include <stdio.h>
#include <stdlib.h>
//Tính tổng các số có tổng chữ số là chẵn trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumArray(int n);
int sumElementInArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int result = sumElementInArr(array, size);
    printf("\nket qua neasd: %d", result);
    return 0;
}
int sumElementInArr(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(sumArray(array[i]) % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}

int sumArray(int n){
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
