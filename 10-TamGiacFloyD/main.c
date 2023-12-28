#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào con số tối đa của tam giác rồi in ra:
    //1
    //2 3
    //4 5 6
    //7 8 9 10
    //11 12 13 14 15
    int n;
    printf("\nNhap vao so dong cua tam giac: ");
    scanf("%d", &n);

    int k = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            k = k + 1;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}
