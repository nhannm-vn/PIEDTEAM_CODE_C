#include <stdio.h>
#include <stdlib.h>
//tổng các số có tổng chữ số là chẵn trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumElement(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong theo yeu cau: %d", sumArray(arrMain, sizeMain));

    return 0;
}
int sumArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        if(sumElement(array[i]) % 2 == 0){
            result += array[i];
        }
    }
    return result;
}
int sumElement(int n){
    int tmp = n;
    int sum = 0;
    int rye = 0;
    while(tmp != 0){
        rye = tmp % 10;
        sum += rye;
        tmp /= 10;
    }
    return sum;
}
void outputArray(int array[],int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
void inputArray(int array[],int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
