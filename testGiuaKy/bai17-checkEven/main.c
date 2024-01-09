#include <stdio.h>
#include <stdlib.h>
/*
•	17.viết hàm nhờ người dùng nhập vào 1 số kiểm tra xem số đó có phải là số chẵn không ?
nếu là chẵn thì ném ra 1, không thì phải ném ra 0 ( 4sp )
*/

int checkEven(void);

int main()
{
    int result = checkEven();
    if(result){
        printf("\nEven");
    }else{
        printf("\nOdd");
    }


    return 0;
}

int checkEven(void){
    int n = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
