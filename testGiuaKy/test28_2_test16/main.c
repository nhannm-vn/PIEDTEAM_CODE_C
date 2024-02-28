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
void changeArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    changeArr(array, size);
    printf("\nMang sau bien doi: ");
    outputArray(array, size);

    return 0;
}
void changeArr(int array[], int size){
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            int m = transEven(array[i]);
            arrTmp[sizeTmp] = m;
            sizeTmp++;
        }else{
            int n = transOdd(array[i]);
            arrTmp[sizeTmp] = n;
            sizeTmp++;
        }
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = arrTmp[i];
    }
}
int transEven(int n){
    int count = 0;
    count = n / 2;
    int m = 0;
    for(int i = 1; i <= count; i++){
        m = m * 10 + 2;
    }
    return m;
}
int transOdd(int n){
    int count = (n-1) / 2;
    int m = 1;
    for(int i = 1; i <= count; i++){
        m = m * 10 + 2;
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
