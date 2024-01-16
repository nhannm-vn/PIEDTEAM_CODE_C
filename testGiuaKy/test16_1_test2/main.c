#include <stdio.h>
#include <stdlib.h>
/*
Viết Hàm Chỉ Nhận vào nhận vào số Chính phương,
và in ra danh sách mảng đó ( 6p )
•	Nhập mảng có size là 5
o	Nhập 1 → OK
o	Nhập 3 → Nhập lại
o	Nhập 4 → OK
o	Nhập 9 → OK
o	Nhập 4 → OK
o	Nhập 4 → OK
⇒ In ra 1 4 9 4 4
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu la: ");
    outputArray(arrMain, sizeMain);

    return 0;
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
        do{
            printf("\narray[%d]: ", i);
            scanf("%d", &array[i]);
            fflush(stdin);
            if(sqrt(array[i]) != (int)sqrt(array[i])){
                printf("\nNhap lai di");
                printf("\n");
            }
        }while(sqrt(array[i]) != (int)sqrt(array[i]));
    }
}
