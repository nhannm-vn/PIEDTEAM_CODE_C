#include <stdio.h>
#include <stdlib.h>
/*
Tách Mảng Thành 2 Phần Chẵn Và Lẽ
+Mảng Chẵn thì Giảm dần
+Mảng Lẽ thì Tăng Dần
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void arrangeDecre(int array[], int size);
void arrangeIncre(int array[], int size);
void separateArray(int array[], int size, int arrTmp[],
                    int *sizeTmp, int arrMtp[], int *sizeMtp);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrTmp[100];
    int sizeTmp = 0;
    int arrMtp[100];
    int sizeMtp = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    separateArray(arrMain, sizeMain, arrTmp, &sizeTmp, arrMtp, &sizeMtp);
    printf("\nMang chan la: ");
    outputArray(arrTmp, sizeTmp);
    printf("\nMang le la: ");
    outputArray(arrMtp, sizeMtp);
    return 0;
}
void separateArray(int array[], int size, int arrTmp[],
                    int *sizeTmp, int arrMtp[], int *sizeMtp){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            arrTmp[*sizeTmp] = array[i];
            (*sizeTmp)++;
        }else{
            arrMtp[*sizeMtp] = array[i];
            (*sizeMtp)++;
        }
    }
    arrangeDecre(arrTmp, *sizeTmp);
    arrangeIncre(arrMtp, *sizeMtp);
}
void arrangeIncre(int array[], int size){
    int tmp = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] > array[j]){
                tmp = array[i];
                array[i] =array[j];
                array[j] = tmp;
            }
        }
    }
}
void arrangeDecre(int array[], int size){
    int tmp = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i+1; j <= size - 1; j++){
            if(array[i] < array[j]){
                tmp = array[i];
                array[i] =array[j];
                array[j] = tmp;
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
