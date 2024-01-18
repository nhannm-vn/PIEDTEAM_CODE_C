#include <stdio.h>
#include <stdlib.h>
//Nhận vào một số rồi đảo ngược số đó sao cho số đó bị thay đổi

void reverseNumber(int *n);
int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nNhap vao n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nNhap lai di ne");
            printf("\n");
        }
    }while(ch != 10);
    reverseNumber(&n);
    printf("\nNewnumber: %d", n);

    return 0;
}
void reverseNumber(int *n){
    int tmp = *n;
    int rye = 0;
    int m = 0;
    while(tmp != 0){
        rye = tmp % 10;
        m = m * 10 + rye;
        tmp /= 10;
    }
    *n = m;
}
