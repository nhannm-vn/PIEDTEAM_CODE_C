#include <stdio.h>
#include <stdlib.h>
//có câu 6: Tính tổng các giá trị có chữ số
//đầu tiên là số chính phương trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkNumber(int n);
int sumNumberCP(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri trong mang: ");
    outputArray(arrMain, sizeMain);
    printf("\nTong cac so theo yeu cau la: %d", sumNumberCP(arrMain, sizeMain));
    return 0;
}
int sumNumberCP(int array[],int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkNumber(array[i])){
            sum += array[i];
        }
    }
    return sum;
}
int checkNumber(int n){
    int tmp = n;
    int rye = 0;
    while(tmp != 0){//tmp = 9
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
