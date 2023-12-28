#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Nhập vào 2 số
    //Tìm bội chung nhỏ nhất của chúng
    //Ví dụ 2 4 BCNN là 4

    int a = 0;
    int b = 0;
    int start;

    printf("\nInput a: ");
    scanf("%d", &a);

    printf("\nInput b: ");
    scanf("%d", &b);

    if(a > b){
        start = a;
    }else{
        start = b;
    }

    printf("\nBCNN la: ");
    for(int i = start; i <= a * b; i++){
        if(i % a == 0 && i % b == 0){
            printf("%d", i);
            break;
        }
    }


    return 0;
}
