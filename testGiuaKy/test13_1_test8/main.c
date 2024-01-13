#include <stdio.h>
#include <stdlib.h>
//Bài 4: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này
int findBCNN(int a, int b);

int main()
{
    int a = 0;
    int b = 0;
    char ch;
    char sh;
    do{
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        scanf("%c", &ch);
        if(ch != 10 || a < 0){
            printf("\nNhap lai");
        }
    }while(ch != 10 || a < 0);

    do{
        printf("\nNhap vao b: ");
        scanf("%d", &b);
        scanf("%c", &sh);
        if(sh != 10 || b < 0){
            printf("\nNhap lai");
        }
    }while(sh != 10 || b < 0);

    printf("\nBCNN: %d", findBCNN(a, b));

    return 0;
}
int findBCNN(int a, int b){
    for(int i = a; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            return i;
        }
    }
}
