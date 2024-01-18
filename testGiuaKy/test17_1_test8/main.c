#include <stdio.h>
#include <stdlib.h>
//Nhập vào mảng tính tổng mảng nếu hai so dau tien lớn nhất và là số nguyên tố
const int MAX = 100;
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findFirstNumber(int n);
int sumArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri cua mang: \n");
    outputArray(arrMain, sizeMain);

    return 0;
}
int sumArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = array[i];

    }
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
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
