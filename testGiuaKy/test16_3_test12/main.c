#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[],int *size);
void outputArray(int array[],int size);
int checkPrime(int n);
int subElementArr(int array[], int size);
int deleteElementByPos(int array[], int *size, int pos);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    int result = subElementArr(array, size);
    printf("\nKet qua: %d", result);
    return 0;
}
int subElementArr(int array[], int size){
    int sub[100];
    int sizeSub = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
            sub[sizeSub] = array[i];
            sizeSub++;
        }
    }
    int max1 = 0;
    int max2 = 0;
    max1 = sub[0];
    int site = 0;
    for(int i = 0; i <= sizeSub - 1; i++){
        if(max1 < sub[i]){
            max1 = sub[i];
            site = i;
        }
    }
    deleteElementByPos(sub, &sizeSub, site);
    max2 = sub[0];
    for(int i = 0; i <= sizeSub - 1; i++){
        if(max2 < sub[i]){
            max2 = sub[i];
        }
    }
    return max1 - max2;
}
int deleteElementByPos(int array[], int *size, int pos){
    if(pos < 0 || pos >= *size){
        return 0;
    }
    for(int i = pos; i <= *size - 2; i++){
        array[i] = array[i+1];
    }
    (*size)--;
}
int checkPrime(int n){
    if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

void inputArray(int array[],int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[],int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
