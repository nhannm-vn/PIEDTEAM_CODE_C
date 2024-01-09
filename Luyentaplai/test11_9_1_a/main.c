#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào number a và number b
//nhiệm vụ của hàm là đổi giá trị của hai biến trên

// ngoài main: chúng ta gọi hàm và truyền vào hai biến
//với mong muốn sau khi hàm chạy giá trị bên trong sẽ thay đổi
//thì in ra màn hình có đổi không

void swap(int *numberA, int *numberB);

int main()
{
    int numberA = 0;
    int numberB = 0;
    printf("\nNhap vao numberA: ");
    scanf("%d", &numberA);
    printf("\nNhap vao numberB: ");
    scanf("%d", &numberB);

    swap(&numberA, &numberB);

    printf("\nnumberA: %d\nnumberB: %d", numberA, numberB);
    return 0;
}
void swap(int *numberA, int *numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;
}
