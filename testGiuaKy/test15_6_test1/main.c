#include <stdio.h>
#include <stdlib.h>
//tìm mảng trong mảng
/*
Viết hàm tìm mảng con trong mảng chính và in ra vị trí mảng con trong mảng chính đó,
nếu không in ra màn hình “Can not Found !”
Phần mềm cho phép nhập mảng chính và mảng con ( 8p )
Ví dụ

- Mảng Chính: 123123456
- Mảng Phụ: 1234
- Output: 3
*/
void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findSubInArr(int arr[], int sizeArr, int sub[], int sizeSub);
int main()
{
    int array[100];
    int size = 0;
    inputArray(array, &size);
    printf("\nCac phan tu trong mang la: ");
    outputArray(array, size);


    return 0;
}
int findSubInArr(int arr[], int sizeArr, int sub[], int sizeSub){
    for(int i = 0; i <= sizeArr - 1; i++){
        if(arr[i] == sub[0]){
            for(int j = 0; j <= sizeSub - 1; j++){
                if(arr[i + j] != sub[j])
            }
        }
    }
}

void inputArray(int array[], int *size){
    printf("Nhap vao do lon: ");
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
