#include <stdio.h>
#include <stdlib.h>

/*22-inductiveV2
Nhap vao mot so nguyen duong number >= 1
tinh tong: 1 + 1/3 + 1/6 +...1/(1+2+3+...+n)

*/

int main()
{
    int n = 0;
    char ch;
    do{
        printf("\nInput n: ");
        scanf("%d", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n < 1){
            printf("\nMoi ban nhap lai!");
        }
    }while(ch != 10 || n < 1);

    int sum = 0;
    float tong = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        tong += (float)1/sum;

    }
    printf("\ntong cua day la: %f", tong);




    return 0;
}
