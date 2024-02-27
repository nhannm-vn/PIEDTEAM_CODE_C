#include <stdio.h>
#include <stdlib.h>
//Tính tổng các số có tổng chữ số là chẵn trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumElement(int n);
int sumArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu la: ");
    outputArray(array, size);

    printf("\nKet qua: %d", sumArray(array, size));
    return 0;
}
int sumArray(int array[], int size){
    int tong = 0;
    for(int i = 0; i <= size - 1; i++){
        if(sumElement(array[i]) % 2 == 0){
            tong += array[i];
        }
    }
    return tong;
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
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
