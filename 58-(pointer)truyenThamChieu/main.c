#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào number a và number b
//nhiệm vụ của hàm là đổi giá trị của hai biến trên

// ngoài main: chúng ta gọi hàm và truyền vào hai biến
//với mong muốn sau khi hàm chạy giá trị bên trong main sẽ thay đổi
//thì in ra màn hình có đổi không

//Pass By Reference

void swapNumber(int *numberA, int *numberB);

int main()
{
    int numberA;
    int numberB;

    printf("\nNhap vao numberA: ");
    scanf("%d", &numberA);

    printf("\nNhap vao numberB: ");
    scanf("%d", &numberB);

    swapNumber(&numberA, &numberB);

    printf("\nnumberA moi: %d", numberA);
    printf("\nnumberB moi: %d", numberB);


    return 0;
}

void swapNumber(int *numberA, int *numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;
}
