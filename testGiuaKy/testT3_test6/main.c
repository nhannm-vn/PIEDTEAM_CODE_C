#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int checkPrime(int number);
int sumElementArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac gia tri cua mang la: ");
    outputArray(arrMain, sizeMain);
    printf("\nket qua: %d", sumElementArray(arrMain, sizeMain));
    return 0;
}
int sumElementArray(int array[], int size){
    int result = 0;
    for(int i = 0; i <= size - 1; i++){
        int tmp = array[i];//129
        int sum = 0;
        do{
            sum = 0;
            int rye = 0;
            while(tmp != 0){
                rye = tmp % 10;// 1 2 9
                sum += rye;//12
                tmp /= 10;
            }
            tmp = sum;//12
        }while(sum > 9);//12
        if(checkPrime(sum)){
            result += array[i];
        }
    }
    return result;
}
int checkPrime(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }else{
        return 0;
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
