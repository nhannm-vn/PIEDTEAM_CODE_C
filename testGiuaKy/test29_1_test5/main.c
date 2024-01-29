#include <stdio.h>
#include <stdlib.h>
/*
•Viết chương trình nhận vào một mảng
trong đó tất cả các phần tử đều khác 0
Hãy đổi phần tử lần thứ 2 của nó thành số 0
nếu nó xuất hiện lần thứ 2 trong mảng. ( 8p )
Ví dụ
Input : 2 2 3 3 5 4 6 4 4
Output :2 0 3 0 5 4 6 0 4
Input : 2 2 2 2 4 5
Output :2 0 2 2 4 5
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void zeroToHero(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    zeroToHero(arrMain, sizeMain);
    printf("\nMang sau khi thay doi: ");
    outputArray(arrMain, sizeMain);
    return 0;
}
void zeroToHero(int array[], int size){
    int flag = 0;
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] == array[j] && array[i] != flag){
                array[j] = 0;
                flag = array[i];
                break;
            }
        }
    }
}
void inputArray(int array[], int *size){
    printf("\nNhap vao do lon: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        do{
            printf("\narray[%d]: ", i);
            scanf("%d", &array[i]);
            fflush(stdin);
            if(array[i] == 0){
                printf("\nNhap lai di");
                printf("\n");
            }
        }while(array[i] == 0);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%d ", array[i]);
    }
}
