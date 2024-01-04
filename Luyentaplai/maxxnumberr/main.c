#include <stdio.h>
#include <stdlib.h>
//Bài 5: Tìm chữ số lớn nhất của số nguyên dương n
int main()
{
    int n = 0;
    char ch;

    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n <= 0){
            printf("\ninput again!");
            printf("\n");
        }
    }while(ch != 10 || n <= 0);

    int tmp = n;
    int rye = 0;
    int max = 0;
    while(tmp != 0){
        rye = tmp % 10;
        if(max <= rye){
            max = rye;
        }
        tmp /= 10;
    }
    printf("\nmax: %d", max);


    return 0;
}
