#include <stdio.h>
#include <stdlib.h>
//Trung bình cộng các phần tử trong mảng
const int MAX = 100;
void inputArray(int array[], int *size);
float tbElementArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nTbc: %f", tbElementArray(arrMain, sizeMain));
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
float tbElementArray(int array[], int size){
    int sum = 0;
    int count = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
        count++;
    }
    return (float)sum/count;
}
