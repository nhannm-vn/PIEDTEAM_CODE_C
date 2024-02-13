#include <stdio.h>
#include <stdlib.h>
//inductive ATan
int inductiveATan(int n);
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

    printf("\nTong theo yeu cau: %d", inductiveATan(n));
    return 0;
}
int inductiveATan(int n){
    int sign = 1;
    int count = 0;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i*sign;
        count++;
        if(count == 2){
            count = 0;
            sign = -sign;
        }
    }
    return sum;
}
