#include <stdio.h>
#include <stdlib.h>

void getNumber(int *n);
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
            printf("\nNhap lai di");
            printf("\n");
        }
    }while(ch != 10);
    getNumber(&n);
    printf("\nn = %d", n);

    return 0;
}
void getNumber(int *n){
    int tmp = *n;
    int rye = 0;
    int firstElement = 0;
    int lastElement = 0;
    if(*n > 9){
        lastElement = tmp % 10;
    }
    while(tmp != 0){
        rye = tmp % 10;
        tmp /= 10;
        if(tmp == 0){
            firstElement = rye;
        }
    }
    if(*n > 9){
        *n = firstElement * 10 + lastElement;
    }else{
        *n = firstElement;
    }

}
