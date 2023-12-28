#include <stdio.h>
#include <stdlib.h>

//Thu 4 loai ham
int sumNumber(int a, int b){// Ham int int
    int sum = a + b;
    return sum;
}

void mulNumber(int a, int b){
    int mul = 1;
    mul = a * b;
    printf("\nMul la: %d", mul);
}

int main()
{
    int a = 0;
    int b = 0;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    printf("\nSum la: %d", sumNumber(a, b));

    mulNumber(a, b);

    return 0;
}
