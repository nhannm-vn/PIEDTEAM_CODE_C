#include <stdio.h>
#include <stdlib.h>
//Viết hàm nhận vào number a và number b
//nhiệm vụ của hàm là đổi giá trị của hai biến trên

// ngoài main: chúng ta gọi hàm và truyền vào hai biến
//với mong muốn sau khi hàm chạy giá trị bên trong sẽ thay đổi
//thì in ra màn hình có đổi không

void swapNumber(int *a, int *b);

int main()
{
    int a = 0;
    int b = 0;
    printf("\nNhap vao a: ");
    scanf("%d", &a);

    printf("\nNhap vao b: ");
    scanf("%d", &b);

    swapNumber(&a, &b);

    printf("\na: %d\nb: %d", a, b);
    return 0;
}
void swapNumber(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
