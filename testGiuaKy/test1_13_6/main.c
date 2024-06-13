#include <stdio.h>
#include <stdlib.h>
//Tính tổng các phân tử là số nguyên tố
//sắp xếp các phần tử tăng dần
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrayAsc(int array[], int size);
int checkPrime(int n);
int sumPrime(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("Cac phan tu la: ");
    outputArray(array, size);


    arrayAsc(array, size);
    //cac so tang dan la
    printf("\nMang sau khi sap xep: ");
    outputArray(array, size);

    //tong cac so nguyen to
    printf("\nTong cac so nguyen to: %d", sumPrime(array, size));
    return 0;
}
int sumPrime(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
            sum += array[i];
        }
    }
    return sum;
}

int checkPrime(int n){
    if(n >=2){
        for(int i = 2; i <= n - 1; i++){//so 2 check dc vi for chay tu 2 den 1 nen 2 van la so nguyen to
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
    }
}
void arrayAsc(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}
void inputArray(int array[], int *size){
    printf("Nhap vao do lon: ");
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
