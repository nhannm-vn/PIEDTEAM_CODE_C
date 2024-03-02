#include <stdio.h>
#include <stdlib.h>
/*
3. Viết hàm nhận vào 1 mảng và 1 key, tìm  vị trí đầu tiên của key
trong mảng và return vị trí đó. Nếu k tìm được thì return -1

*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findKey(int array[], int size, int key);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nMang ne: ");
    outputArray(array, size);
    int key = 0;
    printf("\nNhap vao key: ");
    scanf("%d", &key);
    int result = findKey(array, size, key);
    printf("\n%d", result);
    return 0;
}
int findKey(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
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
