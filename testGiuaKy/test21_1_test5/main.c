#include <stdio.h>
#include <stdlib.h>
/*reverseArray: đảo ngược mảng
+hàm nhận vào một mảng duy nhất sau xử lí mảng đó bị đảo ngược
c1: nhét
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
void reverseArray(int arrMain[], int sizeMain, int arrTmp[], int *sizeTmp);
int main()
{
    int arrMain[100];
    int sizeMain = 0;
    int arrTmp[100];
    int sizeTmp = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nCac phan tu cua mang: ");
    outputArray(arrMain, sizeMain);
    reverseArray(arrMain, sizeMain, arrTmp, &sizeTmp);
    printf("\nMang sau khi doi la: ");
    outputArray(arrTmp, sizeTmp);

    return 0;
}
void reverseArray(int arrMain[], int sizeMain, int arrTmp[], int *sizeTmp){
    *sizeTmp = 0;
    for(int i = sizeMain - 1; i >= 0; i--){
        arrTmp[*sizeTmp] = arrMain[i];
        (*sizeTmp)++;
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
