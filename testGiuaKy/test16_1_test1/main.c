#include <stdio.h>
#include <stdlib.h>
//câu 5. con trỏ swap giá trị a b
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
    printf("\na: %d", a);
    printf("\nb: %d", b);

    printf("\na: %u", &a);
    printf("\nb: %u", &b);

    return 0;
}
void swapNumber(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
