#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrFibonacci(int array[], int *size, int n);
int main()
{
    int array[100];
    int size = 0;
    int n = 0;
    printf("\nNhap vao n: ");
    scanf("%d", &n);
    arrFibonacci(array, &size, n);
    printf("\nMang ne: ");
    outputArray(array, size);

    return 0;
}
void arrFibonacci(int array[], int *size, int n){
    int prev = 0;
    int curr = 1;
    int result = 1;

    array[0] = 1;
    *size = 1;
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
        array[*size] = result;
        (*size)++;
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
