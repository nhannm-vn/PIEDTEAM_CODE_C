#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int n);
int checkCP(int n);
float avgArr(int array[], int size);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);

    printf("\navg ne: %f", avgArr(array, size));
    return 0;
}
float avgArr(int array[], int size){
    int maxCP;
    int minPrime;
    int sub[100];
    int sizeSub = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkPrime(array[i]) == 1){
            sub[sizeSub] = array[i];
            sizeSub++;
        }
    }
    minPrime = sub[0];
    for(int i = 0; i <= sizeSub - 1; i++){
        if(minPrime > sub[i]){
            minPrime = sub[i];
        }
    }
    sizeSub = 0;
    for(int i = 0; i <= size - 1; i++){
        if(checkCP(array[i]) == 1){
            sub[sizeSub] = array[i];
            sizeSub++;
        }
    }
    maxCP = sub[0];
    for(int i = 0; i <= sizeSub - 1; i++){
        if(maxCP < sub[i]){
            maxCP = sub[i];
        }
    }
    float avg = (float)(minPrime + maxCP)/2;
    return avg;
}

int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }
    return 0;
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
