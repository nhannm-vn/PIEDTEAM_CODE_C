#include <stdio.h>
#include <stdlib.h>
//câu 6: Tính tổng các giá trị có chữ số
//đầu tiên là số chính phương trong mảng

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkNumber(int number);
int sumElementInArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);

    printf("\nCac phan tu trong mang la: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac phan tu thoa yeu cau la: %d", sumElementInArray(arrMain, sizeMain));
    return 0;
}
int sumElementInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkNumber(array[i])){
            sum += array[i];
        }
    }
    return sum;
}
int checkNumber(int number){
    int rye = 0;
    int tmp = number;
    while(tmp != 0){//9
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            if(sqrt(rye) == (int)sqrt(rye)){
                return 1;
            }else{
                return 0;
            }
        }
    }
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
