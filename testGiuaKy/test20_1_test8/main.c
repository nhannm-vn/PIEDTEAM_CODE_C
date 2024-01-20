#include <stdio.h>
#include <stdlib.h>
//Nhập vào một vị trí và xóa phân tử tại ví trí đó
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void deleteArray(int array[], int *size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);
    deleteArray(arrMain, &sizeMain);
    printf("\nSau khi xoa: ");
    outputArray(arrMain, sizeMain);

    return 0;
}
void deleteArray(int array[], int *size){
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao vi tri can xoa: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);
    for(int i = n; i <= *size - 2; i++){
        array[i] = array[i + 1];
    }
    *size = *size - 1;
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
