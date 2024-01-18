#include <stdio.h>
#include <stdlib.h>
//Nhập vào 1 số có tu 4 chữ số rồi viết số đó dưới đạng 2 số giữa
//ví dụ 1179 ==> 17
void creNewNumber(int *n);
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
            printf("\nNhap lai di ban");
            printf("\n");
        }
    }while(ch != 10);
    creNewNumber(&n);
    printf("\nSo moi la: %d", n);

    return 0;
}
void creNewNumber(int *n){
    int count = 0;//dem vi tri
    int tmp = *n;
    int rye = 0;
    int firstElement = 0;
    int lastElement = 0;
    while(tmp != 0){
        rye = tmp % 10;
        count++;
        tmp /= 10;
        if(count == 2){
            lastElement = rye;
        }else if(count == 3){
            firstElement = rye;
        }
    }
    *n = firstElement * 10 + lastElement;
}
