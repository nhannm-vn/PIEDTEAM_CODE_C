#include <stdio.h>
#include <stdlib.h>
/*
Biến đổi các phần tử trong mảng thành 1 và 2
( 1 trước 2 sau ) Ví dụ 3 = 2 + 1 thì số 1 sẽ nằm ở phía trước sau khi biến đổi
Ví dụ: 1 3 4 5 6 7 2
→ 1 1 2 2 2 1 2 2 2 2 2 1 2 2 2 2
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int transEven(int n);
int transOdd(int n);
void changeArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    changeArray(arrMain, sizeMain);
    printf("\nMang sau thay doi: ");
    outputArray(arrMain , sizeMain);
    return 0;
}
void changeArray(int array[], int size){
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            arrTmp[sizeTmp] = transEven(array[i]);
            sizeTmp++;
        }else{
            arrTmp[sizeTmp] = transOdd(array[i]);
            sizeTmp++;
        }
    }
    size = 0;
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[size] = arrTmp[i];
        size++;
    }
}
int transOdd(int n){
    int count = (n-1) / 2;
    int m = 1;
    for(int i = 1; i <= count; i++){
        m = m * 10 + 2;
    }
    return m;
}
int transEven(int n){
    int count = n / 2;
    int m = 0;
    for(int i = 1; i <= count; i++){
        m = m * 10 + 2;
    }
    return m;
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
