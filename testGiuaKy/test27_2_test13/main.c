#include <stdio.h>
#include <stdlib.h>
//Nhập vào các phần tử của mảng. Nếu phần tử đó đảo ngược
//vẫn là chính nó thì nhét vào tính tổng
//121 1221 1223 456 2112
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkRever(int n);
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
    int tong = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkRever(array[i]) == 1){
            tong += array[i];
        }
    }
    return tong;
}
int checkRever(int n){
    int rye = 0;
    int tmp = n;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    if(m == n){
        return 1;
    }
    return 0;
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
