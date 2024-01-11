#include <stdio.h>
#include <stdlib.h>
//Tìm số chẵn cuối cùng trong mảng 1 chiều
//các số nguyên. Nếu mảng không có giá trị chẵn thì trả về -1

void inputArray(int array[], int *size);
int lastEven(int array[], int size);

int main()
{
    int arrMain[100];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\n%d", lastEven(arrMain, sizeMain));
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
int lastEven(int array[], int size){
    for(int i = size - 1; i >= 0; i--){
        if(array[i] % 2 == 0){
            return array[i];
        }
    }
    return -1;
}

