#include <stdio.h>
#include <stdlib.h>
int checkCP(int n);
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
            printf("\nNhap lai di!");
            printf("\n");
        }
    }while(ch != 10);
    printf("\n%d", checkCP(n));
    return 0;
}
int checkCP(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }else{
        return -1;
    }
}
