#include <stdio.h>
#include <stdlib.h>
//Bài 5: Tìm chữ số lớn nhất của số nguyên dương n(xai ham)

int maxElement(int n);

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 0){
            printf("\nInput again");
            printf("\n");
        }
    }while(ch != 10 || n < 0);

    printf("\n%d la chu so lon nhat", maxElement(n));

    return 0;
}

int maxElement(int n){
    int rye = 0;
    int tmp = n;
    int max = 0;
    while(tmp != 0){
        rye = tmp % 10;
        if(rye >= max){
            max = rye;
        }
        tmp /= 10;
    }
    return max;
}
