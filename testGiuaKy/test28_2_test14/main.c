#include <stdio.h>
#include <stdlib.h>
/*
Tính tổng của tất cả các phần tử nằm giữa hai số nguyên a và b:
Viết một hàm để tính tổng lớn nhất của tất cả các phần tử trong mảng
nằm giữa hai số nguyên a và b.
Ví dụ nhận vào mảng 1 2 3 4 4 và 2 số nguyên a là 1 và b là 4
→ Tổng 9
1 2 4 -8 7 9 -9 5 -7 5 --> 16
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findMaxSumInArr(int array[], int size);
int findSiteA(int array[], int size, int a);
int findSiteB(int array[], int size, int b);
int sumArray(int array[], int size, int a, int b);
int main()
{
    int array[100];
    int size = 0;
    int a = 0;
    int b = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\nNhap vao a: ");
    scanf("%d", &a);
    printf("\nNhap vao b: ");
    scanf("%d", &b);
    int result = sumArray(array, size, a, b);
    if(result == 0){
        printf("\nVi tri khong hop li");
    }else{
        printf("\nMax la: %d", result);
    }
    return 0;
}
int sumArray(int array[], int size, int a, int b){
    int siteA = findSiteA(array, size, a);
    int siteB = findSiteB(array, size, b);
    if(siteA == -1 || siteB == -1){
        return 0;
    }
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = siteA + 1; i <= siteB - 1; i++){
        arrTmp[sizeTmp] = array[i];
        sizeTmp++;
    }
    return findMaxSumInArr(arrTmp, sizeTmp);
}
int findSiteA(int array[], int size, int a){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == a){
            return i;
        }
    }
    return -1;
}
int findSiteB(int array[], int size, int b){
    for(int i = size - 1; i >= 0; i--){
        if(array[i] == b){
            return i;
        }
    }
    return -1;
}
int findMaxSumInArr(int array[], int size){
    int max = array[0] + array[1];
    for(int i = 0; i <= size - 2; i++){
        int sum = 0;
        for(int j = i+1; j <= size - 1; j++){
            sum += array[j];
            if(sum + array[i] > max){
                max = array[i] + sum;
            }
        }
    }
    return max;
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
