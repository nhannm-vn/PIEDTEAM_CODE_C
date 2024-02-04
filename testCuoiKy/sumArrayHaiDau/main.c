#include <stdio.h>
#include <stdlib.h>
/*
Viết một hàm để tính tổng lớn nhất của tất cả các phần tử trong
mảng nằm giữa hai số nguyên a và b.
Ví dụ nhận vào mảng 1 2 3 4 4 và 2 số nguyên a là 1 và b là 4
→ Tổng 9
1 2 4 -8 7 9 -9 5 -7 5 --> 16
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int sumIntervalArray(int array[], int size, int a, int b);
int arrayMaxNextTo(int array[], int size);
int posA(int array[], int size, int a);
int posB(int array[], int size, int b);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int a = 0;
    int b = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao vi tri dau a: ");
    scanf("%d", &a);

    printf("\nNhap vao vi tri dau b: ");
    scanf("%d", &b);

    if(sumIntervalArray(arrMain, sizeMain, a, b) == 0){
        printf("\nKhoang interval khong hop li");
    }else{
        printf("\nTong max la: %d", sumIntervalArray(arrMain, sizeMain, a, b));
    }
    return 0;
}
int sumIntervalArray(int array[], int size, int a, int b){
     int flagA = 0;
     int flagB = 0;
     for(int i = 0; i <= size - 1; i++){
        if(array[i] == a){
            flagA = 1;
        }
        if(array[i] == b){
            flagB = 1;
        }
     }
     if(flagA == 0 || flagB == 0){
        return 0;
     }
     int siteA = posA(array, size, a);
     int siteB = posB(array, size, b);
     int arrTmp[100];
     int sizeTmp = 0;
     for(int i = siteA + 1; i <= siteB - 1; i++){
        arrTmp[sizeTmp] = array[i];
        sizeTmp++;
     }
    return arrayMaxNextTo(arrTmp, sizeTmp);
}
int posB(int array[], int size, int b){
    for(int i = size - 1; i >= 0; i--){
        if(array[i] == b){
            return i;
        }
    }
}
int posA(int array[], int size, int a){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == a){
            return i;
        }
    }
}
int arrayMaxNextTo(int array[], int size){
    int sum = 0;
    int max = array[0] + array[1];
    for(int i = 0; i <= size - 2; i++){
        sum = 0;
        for(int j = i+1; j <= size - 1; j++){
            sum += array[j];
            if(array[i] + sum > max){
                max = array[i] + sum;
            }
        }
    }
    return max;
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
