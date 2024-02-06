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
void transArrayToOneTwo(int array[], int size);
int transNumber(int n);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    transArrayToOneTwo(arrMain, sizeMain);
    printf("\nMang sau bien doi: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
int transNumber(int n){
    int count = 0;
    int m = 0;
    if(n % 2 == 0){
        count = n / 2;
        for(int i = 1; i <= count; i++){
            m = m * 10 + 2;
        }
        return m;
    }else{
        m = 1;
        count = (n - 1)/2;
        for(int i = 1; i <= count; i++){
            m = m * 10 + 2;
        }
        return m;
    }
}
void transArrayToOneTwo(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        array[i] = transNumber(array[i]);
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
