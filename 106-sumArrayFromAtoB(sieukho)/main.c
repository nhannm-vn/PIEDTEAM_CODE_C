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
int findMaxSum(int array[], int size);
int findSiteA(int array[], int size, int a);
int findSiteB(int array[], int size, int b);
int sumInterval(int array[], int size, int a, int b);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int a = 0;
    int b = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    printf("\nNhap vao a: ");
    scanf("%d", &a);
    printf("\nNhap vao b: ");
    scanf("%d", &b);

    int tmp = sumInterval(arrMain, sizeMain, a, b);
    if(tmp == -1){
        printf("\nKhoang interval khong hop li ne");
    }else{
        printf("\nTong la: %d", tmp);
    }
    return 0;
}
int sumInterval(int array[], int size, int a, int b){
    int siteA = findSiteA(array, size, a);
    int siteB = findSiteB(array, size, b);
    if(siteA == -1 || siteB == -1){
        return -1;
    }else{
        int arrTmp[100];
        int sizeTmp = 0;
        for(int i = siteA + 1; i <= siteB - 1; i++){
            arrTmp[sizeTmp] = array[i];
            sizeTmp++;
        }
        return findMaxSum(arrTmp, sizeTmp);
    }
}
int findSiteB(int array[], int size, int b){
    for(int i = size - 1; i >= 0; i--){
        if(array[i] == b){
            return i;
        }
    }
    return -1;
}
int findSiteA(int array[], int size, int a){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == a){
            return i;
        }
    }
    return -1;
}
int findMaxSum(int array[], int size){
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
