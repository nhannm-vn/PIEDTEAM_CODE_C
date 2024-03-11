#include <stdio.h>
#include <stdlib.h>
//Nhập vào các phần tử của mảng. Nếu phần tử đó đảo ngược
//vẫn là chính nó thì nhét vào tính tổng
//121 1221 1223 456 2112
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int reverNumber(int n);
int sumArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int result = sumArr(array, size);
    printf("\nket qua la: %d", result);

    return 0;
}
int sumArr(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(reverNumber(array[i]) == array[i]){
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
