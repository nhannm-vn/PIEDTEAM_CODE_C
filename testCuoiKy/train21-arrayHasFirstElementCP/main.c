#include <stdio.h>
#include <stdlib.h>
//câu 6: Tính tổng các giá trị có chữ số
//đầu tiên là số chính phương trong mảng
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findLastElement(int n);
int checkCP(int n);
int sumArray(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu trong mang: ");
    outputArray(array, size);

    printf("\nTong theo yeu cau: %d", sumArray(array, size));
    return 0;
}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkCP(findLastElement(array[i]))){
            sum += array[i];
        }
    }
    return sum;
}
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return 0;
    }
}
int findLastElement(int n){
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
