#include <stdio.h>
#include <stdlib.h>

//Nhập vào hai số a và b. Tìm bội chung nhỏ nhất của nó:
//Ví dụ 8 % 2 == 0 thì 8 là bội của 2

int main()
{
    int a = 0;
    int b = 0;
    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    //Số 8 và 2 thì bscnn là 8

    int start = 0;
    if(a > b){
        start = a;
    }else{
        start = b;
    }

    for(int i = start; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            printf("\nBCNN cua hai so  a va b la: %d", i);
            break;
        }
    }

    return 0;
}
