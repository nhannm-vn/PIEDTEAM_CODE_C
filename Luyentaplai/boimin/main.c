#include <stdio.h>
#include <stdlib.h>

//Nhập vào hai số a và b. Tìm bội chung nhỏ nhất của nó:
//Ví dụ 8 % 2 == 0 thì 8 là bội của 2

int main()
{
    int a;
    int b;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    for(int i = a; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            printf("\n%d la BCNN cua hai so", i);
            break;
        }
    }



    return 0;
}
