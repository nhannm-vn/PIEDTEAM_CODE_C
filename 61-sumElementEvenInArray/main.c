#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phần tử có giá trị là chẵn
void inputArray(int array[], int *size);
int sumEven(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);

    printf("\nTong: %d", sumEven(arrMain, sizeMain));
    return 0;
}
void inputArray(int array[], int *size){
    printf("\nNhap do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
int sumEven(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
