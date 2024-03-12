#include <stdio.h>
#include <stdlib.h>
//arrInArr
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int arrInArr(int array[], int size, int sub[], int sizeSub);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu array la: ");
    outputArray(array, size);

    int sub[100];
    int sizeSub = 0;
    inputArray(sub, &sizeSub);
    printf("\nCac phan tu sub la: ");
    outputArray(sub, sizeSub);

    int result = arrInArr(array, size, sub, sizeSub);
    if(result == -1){
        printf("\nKhong tim thay");
    }else{
        printf("\nVi tri: %d", result);
    }
    return 0;
}
int arrInArr(int array[], int size, int sub[], int sizeSub){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(array[i+j] != sub[j]){
                    break;
                }else{
                    if(j == sizeSub - 1){
                        return i;
                    }
                }
            }
        }
    }
    return -1;
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
